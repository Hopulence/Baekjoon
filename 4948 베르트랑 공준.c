#include<stdio.h>
#include<stdlib.h>

int prime_check(int n);

int main() { //베르트랑 공준 
	int *test_case=malloc(sizeof(int)*123456);
	int count[123456]={0};
	int i=0,j;
	
	while(1) {
		scanf("%d", test_case+i);
		if(test_case[i]==0)
			break;
		for(j=test_case[i]+1; j<=2*test_case[i]; j++){
			if(prime_check(j))
				count[i]++;
			}
		i++;	
	}
	
	i=0;
	
	while(test_case[i] != 0) {
		printf("%d\n", count[i++]);
	}
	
	free(test_case);
	return 0;
}

int prime_check(int n) {
	int i;
	
	if(n<2) return 0;
	
	for(i=2; i*i<=n; i++)
		if(n%i == 0)
			return 0;
			
	return 1;
}
