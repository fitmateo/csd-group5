// Source template for a simple 7-bit binary counter with
// enable and synchronous reset.

module count_7(enable, reset, clk, count_out);

  output reg [6:0] count_out;
  input enable, reset, clk;

  always @(<FILL_IN>)
  begin
    if(<FILL_IN>) begin // Reset Condition
      // Reset Counter
    end else if (<FILL_IN>) begin // Run Condition
      // Increment Counter
    end
  end
  
endmodule