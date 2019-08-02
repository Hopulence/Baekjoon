#include<stdio.h>

int main() {
	int n;
	int i,j;
	scanf("%d", &n);
	int arr[n];
	int tmp;
	
	for(i=0;i<n;i++)
		scanf("%d", arr+i);
	
	
			
	for(i=0;i<n;i++)
		printf("%d\n", arr[i]);
		
	return 0;

}
