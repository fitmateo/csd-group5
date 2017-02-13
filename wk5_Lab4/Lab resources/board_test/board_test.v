`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:09:54 01/20/2015 
// Design Name: 
// Module Name:    board_test 
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
module board_test( leds, switches, btn_up, btn_dwn, btn_lft, btn_rt, btn_ctr, clk );

output reg [7:0] leds;
input [7:0] switches;
input btn_up, btn_dwn, btn_lft, btn_rt, btn_ctr, clk;

always @(posedge clk)
begin
	if(btn_up)
		leds = 8'b1111_1111;
	else if(btn_dwn)
		leds = 8'b0000_0000;
	else if(btn_lft)
		leds = 8'b1111_0000;
	else if(btn_rt)
		leds = 8'b0000_1111;
	else if(btn_ctr)
		leds = switches;
	else
		leds = leds;
end

endmodule
