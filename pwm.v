`include "keyDelay.v"
//`timescale 20ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:12:14 07/22/2019 
// Design Name: 
// Module Name:    pwm 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module pwm(
    input clk,
    input rst,
	input [3:0] buttons,
    output pwm1,
    output pwm2,
	output [3:0] leds
	//output clk_out
    );
	
	//方便出现在<=的右侧
	reg pwm1_reg;
	reg pwm2_reg;
	reg [3:0] leds;
	
	wire [3:0] buttons_reg;
	reg [3:0] buttons_status1;
	reg [3:0] buttons_status2;
	
	//reg [3:0] psw;
	//计算周期使用的总时间数，刻度20ns
	//reg [31:0] totaltime;
	
	//一个周期的脉冲数/2.5ns
	reg [23:0] T;
	
	//调整周期的刻度，起始为1，单位为2.5ns
	reg [4:0] scale;
	
	//死区时间数，刻度2.5ns
	reg [7:0] deadtime;
	
	//计数器
	reg [23:0] counter;
	
	wire clk_50;
	wire clk_400;
	
	//倍频模块50MHz---400MHz
	pll_controller pll
	(// Clock in ports
    .CLK_IN1(clk),      // IN
    // Clock out ports
    .CLK_OUT1(clk_50),     // OUT
    .CLK_OUT2(clk_400),     // OUT
    // Status and control signals
    .RESET(rst));  
	// IN
	
	
	//按键消抖
	keyDelay kd1(.keyVal(buttons_reg),.key(buttons),.clock(clk_400),.reset(rst));
	//一个clk对应的时间为2.5ns
	
	
	
	//初始化块
	initial 
	begin
		T <= 24'd400;
		scale <= 5'd1;
		deadtime <= 8'd16;
		counter <= 24'd0;
		pwm1_reg <= 1'b1;
		pwm2_reg <= 1'b0;
	end
	
	//设置reset按钮按下的操作，如果该周期没完成，则等到周期结束再进行相应的操作
	//其他的buttons操作也是这个逻辑，首先判断是否到本周期结束
	
	
	always @(posedge clk_400 or posedge rst)
	begin
		if (rst)
		begin
			T <= 24'd400;
			scale <= 5'd1;
		end
		else if (buttons_status1[0] & ~buttons_status2[0])//上升沿
		begin 
			T <= T - scale;
		end
		else if (~buttons_status1[0] & buttons_status2[0]) //下降沿
		begin
			T <= T;
		end
		else if (buttons_status1[1] & ~buttons_status2[1]) 
		begin
			T <= T + scale;
		end
		else if (~buttons_status1[1] & buttons_status2[1])
		begin
			T <= T;
		end
		else if (buttons_status1[2] & ~buttons_status2[2])
		begin 
			scale <= scale << 1;
		end
		else if (~buttons_status1[2] & buttons_status2[2]) 
		begin
			scale <= scale;
		end
		else if (buttons_status1[3] & ~buttons_status2[3])
		begin 
			scale <= scale >> 1;
		end
		else if (~buttons_status1[3] & buttons_status2[3]) 
		begin
			scale <= scale;
		end
		else if (scale == 5'd0)
		begin
			scale <= 5'd1;
		end
	end
	//设置counter计数器自动计数
	always @(posedge clk_400)
	begin
		if (counter >= (T + T + deadtime + deadtime))
			counter <= 0;
		else 
			counter <= counter + 1;
	end
	
	//根据计数器形成波形
	always @(posedge clk_400)
	begin
		if (counter >= (T + T + deadtime))
			pwm2_reg <= 1'b0;
		else if (counter >= (T + deadtime))
			pwm2_reg <= 1'b1;
		else if (counter >= T)
			pwm1_reg <= 1'b0;
		else if (counter >= 0)
			pwm1_reg <= 1'b1; 
	end
	
	//led随按键的按下而发光
	always @(*)
		leds <= ~buttons;
		
	//assign leds = psw;
	//按键电路
	always @(posedge clk_400 or posedge rst)
	begin
		if (rst)
		begin
			buttons_status1 <= 4'b0000;
			buttons_status2 <= 4'b0000;
		end
		else
		begin
			buttons_status1 <= buttons_reg;
			buttons_status2 <= buttons_status1; 
		end
	end
	
	assign pwm1 = pwm1_reg;
	assign pwm2 = pwm2_reg;
	
	//assign clk_out = clk_400;
endmodule
