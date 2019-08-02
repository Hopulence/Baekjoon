#include<stdio.h> // 오름차순 정렬

int main() {
	
	int n;
	int i,j;
	int tmp;
	
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++) 
		scanf("%d", arr+i);
	
	for(i=0;i<n;i++) {
		for(j=i;j<n;j++) {
			if(arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
				
			
		}
	}
	
	
	for(i=0;i<n;i++)
		printf("%d\n", arr[i]);
	
	return 0;
} 
