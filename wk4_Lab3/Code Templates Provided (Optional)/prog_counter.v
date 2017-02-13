// Wrapper to add programmability to a 7-bit counter.
// This module contains the logic to stop a counter when it
// reaches a designated value. The maximum value is 99 (decimal)

module prog_count_7(max_count, reset, clk, count_out)

input [6:0] max_count;
input reset, clk;
output [6:0] count_out;

// Wires/Registers required go here.

// 7-bit counter instance
count_7 counter_1(.enable(<FILL_IN),
		  .reset(<FILL_IN),
		  .clk(<FILL_IN),
		  .count_out(<FILL_IN>));


// TODO: Write logic for Counter control