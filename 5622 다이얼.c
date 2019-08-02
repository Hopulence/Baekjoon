#include<stdio.h>

int main() {
	char in[16] = {0}; //'A' == 65

	int i=0;
	int time=0;
	
	scanf("%s", in);
	

	while(in[i] != NULL) {
		
		if( 'A' <= in[i]  <= 'C' ) //ABC
			time += 3;
		else if( 'D' <= in[i]  <= 'F' ) //DEF
			time += 4;
		else if( 'G' <= in[i]<= 'I' ) //GHI
			time += 5;
		else if( 'J' <= in[i] <= 'L' ) //JKL
			time += 6;
		else if( 'M' <= in[i]  <= 'O' ) //MNO
			time += 7;
		else if( 'P' <= in[i] <= 'S' ) //PQRS
			time += 8;
		else if( 'T' <= in[i]  <= 'V' ) //TUV
			time += 9;
		else if( 'W' <= in[i]  <= 'Z' ) //WXYZ
			time += 10;	
		
		i++;
	}

	printf("%d\n", time);
	
	return 0;
}
