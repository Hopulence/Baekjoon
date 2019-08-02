#include<stdio.h>

int main() {
	int n;
	int i=1,j;
	int sum=0;
	
	scanf("%d", &n);
	
	while(1) {
		for (j=1;j<=i;j++) {
			if(n == sum + j )
				printf("\n %d \n", j);
				break;
			}
		if( n == sum + j )
			break;
			
		sum += i;
		i++;
	}
//	printf("\n %d \n", j);
	if( i % 2 ==0)
		printf("%d/%d", j, i+1-j);
	else if (i % 2 == 1)
		printf("%d/%d", i+1-j, j);
		
	return 0;
}
