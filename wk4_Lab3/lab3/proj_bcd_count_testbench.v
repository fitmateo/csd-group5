`timescale 1ns / 1ps

module proj_bcd_count_testbench;

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
			#50;
			clk = 1;
			#50;
		end
		
	initial begin
		// Initialize Inputs
		max_count = 67;
		clk = 0;
		run = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		max_count = 11;
		
		#100;
		
		run = 1;
		
		#1500;
		
		max_count = 99;
		
		#100;
		
		max_count = 2;
		
		#100;
		
		run = 0;
		
		#100;
		
		max_count = 101;
		
		#100;
		
		run = 1;
		
		#10000 $finish;
	end
      
endmodule

