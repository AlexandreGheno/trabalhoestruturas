module trabalho01(

		input clk,
		output saida);

		assign saida = clk;
		
endmodule

module executatrabalho01;
	
	reg clk;
	always #4 clk <= ~clk;
	
	wire saida;
	
	trabalho01 led(clk,saida);
	
	initial begin
		$dumpvars(0,led);
		#1
		clk = 1;
		#500
		$finish;
	end
endmodule
