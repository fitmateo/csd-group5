`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:09:13 02/08/2017
// Design Name:   programmable_bcd_count
// Module Name:   .../.../Xilinx/mf_lab3/proj_bcd_count_tb.v
// Project Name:  mf_lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: programmable_bcd_count
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module proj_bcd_count_tb;

	// Inputs
	reg [6:0] max_count;
	reg clk;
	reg run;

	// Outputs
	wire [3:0] digit_1;
	wire [3:0] digit_2;

	// Instantiate the Unit Under Test (UUT)
	programmable_bcd_count uut (
		.max_count(max_count), 
		.clk(clk), 
		.run(run), 
		.digit_1(digit_1), 
		.digit_2(digit_2)
	);

	always
		begin
			clk = 0;
			#5;
			clk = 1;
			#5;
		end
		
	initial begin
		// Initialize Inputs
		max_count = 0;
		run = 0;
		#10;
		
		// Wait 100 ns for global reset to finish
		
      run = 1;
		
		#100;
		
		run = 0;
		
		max_count = 60;
		#200;
		run = 1;
		
		max_count = 49;
		#100;
		
		
		//run = 0;
		//#10;
		//run = 1;
		/*#100;
		
		max_count = 2;
		
		#100;
		
		run = 1;
		
		#100;
		
		max_count = 101;
		
		#100;
		
		run = 1;*/
		
		//#10000; $finish;
	end
endmodule

