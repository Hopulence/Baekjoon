#include<stdio.h>

int main() {
	char arr[6];
	int i=0, n, x;  // 1<= n <= 10,000
	int top=0;
	
	scanf("%d", &n);
	int stack[n];
	
	for(i=0;i<n;i++)
		stack[i] = '\0';
		
	i=0;
	while(i<n) {
		scanf("%s", arr);
		
		if(!strcmp(arr, "push")) {
			scanf("%d", &x);
			stack[top] = x;
			top++;
		}
		
		if(!strcmp(arr, "pop")) {
			if(top == 0)
				printf("-1\n");
			else {
				printf("%d\n", stack[top-1]);
				top--;
			}
		}
		
		if(!strcmp(arr, "size")) {
			printf("%d\n", top);
		}
		
		if(!strcmp(arr, "empty")) {
			if(top == 0 )
				printf("1\n");
			else
				printf("0\n");
		}
		
		if(!strcmp(arr, "top")) {
			if(top==0)
				printf("-1\n");
			else
				printf("%d\n", stack[top-1]);
		}
		i++;
	}
	

	return 0;
}
