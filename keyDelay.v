`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:16:40 07/24/2019 
// Design Name: 
// Module Name:    keyDelay 
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
module keyDelay(keyVal,key,clock,reset);
 
parameter KeyCnt = 4;//Ĭ��4������
parameter TIME   = 23'd7999999;//50Mhz 0.02us 20ms 10^6-1
 
input clock,reset;
input  [3:0] key;
output [3:0] keyVal;//����ȶ��ļ�ֵ
 
reg [22:0]       time_cnt;
reg [22:0]       time_cnt_next;
reg [3:0] key_reg;
reg [3:0] key_reg_next;
 
//ʱ���· ����ʱ����ֵ
always @(posedge clock or posedge reset)
	begin
		if(reset)
			time_cnt <= 23'h0;
		else
			time_cnt <= time_cnt_next;
	end
 
//��ϵ�· ʵ�ֶ�ʱ��
always @(*)
	begin
		if(time_cnt == TIME + 1)
			time_cnt_next <= 23'h0;
		else
			time_cnt_next <=time_cnt + 23'h1;
	end
 
//ʱ���· �������Ĵ�����ֵ
always @(posedge clock or posedge reset)
	begin
		if(reset)
			key_reg <= 4'h0;
		else 
			key_reg <= key_reg_next;
	end
 
//��ϵ�· ÿ��һ����ʱ�����ڽ������ΰ�����ֵ
always @(*)
	begin
		if(time_cnt == TIME)
			key_reg_next <= key;
		else
			key_reg_next <= key_reg;
	end
 
assign keyVal = ~(key_reg & (~key_reg_next));
 
endmodule