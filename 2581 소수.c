#include<stdio.h>

int main() {
	int i,j,k=0;
	int m,n,l;
	int count;
	scanf("%d %d", &m, &n);
	//l=n-m;
	int prime_num[10000]={0};
	unsigned int sum=0;
	
	for(i=m;i<=n;i++) {
		count=0;
		for(j=2;j<i;j++) {
			if(i%j == 0)
				count++;
			if(count > 0)
				break;
		}
		
		if(count == 0){
				if(i==1) continue;
				prime_num[k] = i;
				k++;
			}
	}
	
	if(prime_num[0] == 0)
		printf("-1\n");
		
	else {
		for(i=0;i<=k;i++) 
			sum += prime_num[i];
		printf("%d\n", sum);
		printf("%d\n", prime_num[0]);
	}
	
	return 0;
}
