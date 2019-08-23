`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:06:29 08/15/2019
// Design Name:   pwm
// Module Name:   C:/Users/14154/Desktop/PWM_DEAD-master/pwmtest.v
// Project Name:  PWM_DEAD
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pwm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pwmtest;

	// Inputs
	reg clk;
	reg rst;
	reg [3:0] buttons;

	// Outputs
	wire pwm1;
	wire pwm2;
	wire [3:0] leds;
	wire clk_out;

	// Instantiate the Unit Under Test (UUT)
	pwm uut (
		.clk(clk), 
		.rst(rst), 
		.buttons(buttons), 
		.pwm1(pwm1), 
		.pwm2(pwm2), 
		.leds(leds), 
		.clk_out(clk_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		buttons = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
    always #10 clk = ~clk;
endmodule

