// This is the top module for the programmable BCD counter.
// It implements a programmable 7-bit counter and a binary-
// to-bcd converter that can output two digits.
// 
// Use of this template is optional

module bcd_count_7(max_count, clk, run, digit_1, digit_2);

  input [6:0] max_count;
  input clk, run;
  output [3:0] digit_1;
  output [3:0] digit_2;

  // TODO: Wires and registers for interconnect

  // Programmable 7-bit counter module
  prog_count_7 counter(.max_count(<FILL_IN>), 
			.reset(<FILL_IN>), 
			.clk(<FILL_IN>), 
			.count_out(<FILL_IN>));

  // Binary-to-BCD Converter
  binary_bcd_2 bcd_converter(.bin_in(<FILL_IN>),
			      .digit_1(<FILL_IN>), 
			      .digit_2(<FILL_IN>));

endmodule