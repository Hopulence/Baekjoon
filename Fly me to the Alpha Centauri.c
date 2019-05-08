#include<stdio.h>
#include<math.h>

int main() {
	int test_case;
	int x, y, k;
	int i=0;
	unsigned int j; //j*j + j 의 쵀대범위 고려
    // 2^31 = 2,147,483,648
    // long <= 2,147,483,647
    // unsigned int <= 4,294,967,295
	
	scanf("%d", &test_case);
	int n[test_case];
	
	while(i<test_case) {
		scanf("%d %d", &x, &y);
		k=y-x;
		
		j=sqrt(k);
		
		if( j*j < k && k <= j*j + j)
			n[i] = 2*j;
	
		else if( j*j-j < k && k <= j*j  )
			n[i] = 2*j-1;
		
		else if( j*j+j < k && k <=(j+1)*(j+1 ))
			n[i] = 2*j+1;
		
		i++;
	}
	
	for(i=0;i<test_case;i++)
		printf("%d\n", n[i]);
	
	
	return 0;
}
