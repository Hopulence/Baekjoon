#include<stdio.h>
#include<stdio.h>

int main() { //골드바흐 파티션 
	int test_case;
	scanf("%d", &test_case);
	int n[test_case];
	int **gold_bach;
	int prime[1230] = '\0'; // 10,000 소수 
	int i,j=0,k;
	
	
	for(i=0;i<2;i++) {
		gold_hach[i] = malloc(sizeof(int)*test_case);
	}
	
	for(i=2;i<10000;i++) // 10,000이하 소수 배열 입력 
		if(elatostens(i))
			prime[j++]=i;
	
	for(i=0;i<test_case;i++) { 
		scanf("%d", n+i)
	}
	
	
	for(i=0;i<test_case;i++) {
		goldbach(prime, n[test_case], gold_bach, i);
	}
	
	for(i=0;i<test_case;i++)
		printf("%d %d\n", gold_bach[i][0], gold_bach[i][1]);
		
	
	for(k=0;k<test_case;k++)
		for(i=0;i<2;i++)
			free(gold_bach[k][i]);	
		
	return 0;
}

void goldbach(int *prime, int n, int **gold_bach,int i) {  
	int j;
	
	for(j= ;j<n;j++)
		if(prime[j] + prime[k] ==n)
		
		
			gold_bach[i][0] = prime[j];
			gold_bach[i][1] = prime[k];
			
		
	
		
	
		
	
}

int elatostens(int n) {
	int i;
	if(n<2)
		return 0;
		
	for(i=2;i*i<=n;i++)
		if(n%i == 0)
			return 0;
			
	return 1;
}
