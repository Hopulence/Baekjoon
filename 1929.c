#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int prime(int n);

int main() {
	int n, m; // M이상 N이하 소수 출력 프로그램 (1<= M <= N <= 1,000,000)
	int i, cout=0;
	scanf("%d %d", &m, &n);
	int *prime_num = malloc(sizeof(int)*(n-m));
	
	for(i=m; i<=n; i++) {
		if( primee_check(i) )
			prime_num[cout++] = i;
	}
	
	prime_num[cout] = '\0';
	
	i=0;
	while(prime_num[i] != NULL)
		printf("%d\n", prime_num[i++]);
	
	return 0;
}

int prime_check(int n) {
	int i;
	int root;
	if(n<2)
		return 0; //False
		
	for(i=2; i*i <= n; i++) // ?
		if (n%i==0)
			return 0; //False
	
	return 1; //True
}
