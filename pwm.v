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
	
	//���������<=���Ҳ�
	reg pwm1_reg;
	reg pwm2_reg;
	reg [3:0] leds;
	
	wire [3:0] buttons_reg;
	reg [3:0] buttons_status1;
	reg [3:0] buttons_status2;
	
	//reg [3:0] psw;
	//��������ʹ�õ���ʱ�������̶�20ns
	//reg [31:0] totaltime;
	
	//һ�����ڵ�������/2.5ns
	reg [23:0] T;
	
	//�������ڵĿ̶ȣ���ʼΪ1����λΪ2.5ns
	reg [4:0] scale;
	
	//����ʱ�������̶�2.5ns
	reg [7:0] deadtime;
	
	//������
	reg [23:0] counter;
	
	wire clk_50;
	wire clk_400;
	
	//��Ƶģ��50MHz---400MHz
	pll_controller pll
	(// Clock in ports
    .CLK_IN1(clk),      // IN
    // Clock out ports
    .CLK_OUT1(clk_50),     // OUT
    .CLK_OUT2(clk_400),     // OUT
    // Status and control signals
    .RESET(rst));  
	// IN
	
	
	//��������
	keyDelay kd1(.keyVal(buttons_reg),.key(buttons),.clock(clk_400),.reset(rst));
	//һ��clk��Ӧ��ʱ��Ϊ2.5ns
	
	
	
	//��ʼ����
	initial 
	begin
		T <= 24'd400;
		scale <= 5'd1;
		deadtime <= 8'd16;
		counter <= 24'd0;
		pwm1_reg <= 1'b1;
		pwm2_reg <= 1'b0;
	end
	
	//����reset��ť���µĲ��������������û��ɣ���ȵ����ڽ����ٽ�����Ӧ�Ĳ���
	//������buttons����Ҳ������߼��������ж��Ƿ񵽱����ڽ���
	
	
	always @(posedge clk_400 or posedge rst)
	begin
		if (rst)
		begin
			T <= 24'd400;
			scale <= 5'd1;
		end
		else if (buttons_status1[0] & ~buttons_status2[0])//������
		begin 
			T <= T - scale;
		end
		else if (~buttons_status1[0] & buttons_status2[0]) //�½���
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
	//����counter�������Զ�����
	always @(posedge clk_400)
	begin
		if (counter >= (T + T + deadtime + deadtime))
			counter <= 0;
		else 
			counter <= counter + 1;
	end
	
	//���ݼ������γɲ���
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
	
	//led�水���İ��¶�����
	always @(*)
		leds <= ~buttons;
		
	//assign leds = psw;
	//������·
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
