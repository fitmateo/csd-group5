`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name:    programmable_bcd_count
//
//////////////////////////////////////////////////////////////////////////////////
module programmable_bcd_count(max_count, clk, run, digit_1, digit_2);
  
   input [6:0] max_count; 		//Number to count to - i/p by user
   input clk, run;	   	
  
   output [3:0] digit_1;   //Ones place
   output [3:0] digit_2;   //Tens place

	reg [6:0] x;
	reg [6:0] y;
	reg [3:0] digit_1 = 0;
	reg [3:0] digit_2 = 0;
	
	always @*
	begin
		
		x = 0;
		//y = max_count;
		
		while(run) @(posedge clk)
		begin
			if(x < y && x < 99)
			begin
					x = x + 1;  
					digit_1 = x%10;
					digit_2 = x/10;
			end
		end
		
		if(run == 0)
		begin
			x = 0;
			y = max_count;
			digit_1 = 0;
			digit_2 = 0;
		end //end if
		
	end	//end always  
					
endmodule
