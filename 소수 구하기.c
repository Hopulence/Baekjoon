#include<stdio.h>
#include<stdlib.h>

int prime(int n);

int main() {
	int n, m;
	int i, cout=0;
	scanf("%d %d", &m, &n);
	int *prime_num = malloc(sizeof(int)*(n-m));
	
	for(i=m; i<=n; i++) {
		if( prime(i) )
			prime_num[cout++] = i;
	}
	
	prime_num[cout] = '\0';
	i=0;
	while(prime_num[i] != NULL)
		printf("%d\n", prime_num[i++]);
	
	return 0;
}

int prime(int n) {
	int i;
	if(n<2)
		return 0;
		
	for(i=2; i*i <= n; i++)
		if (n%i==0)
			return 0;
	
	return 1;
}
