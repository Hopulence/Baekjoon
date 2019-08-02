#include<stdio.h>

int main() {
	int n;
	int i=1;
	int sum=2;
	
	scanf("%d", &n);
	
	while(1){
		if( n==1 ) 
			break;
				
		else if( sum <= n && n < sum+6*i ){
			i++;
			break;
		}
		sum += 6*i;
		i++;
	}
	printf("%d\n", i);
	
	return 0;
}
