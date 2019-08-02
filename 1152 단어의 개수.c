#include<stdio.h>
#include<string.h>


int main() {
	char str[1000000];
	char *token = NULL; 
	int count=0;
	
	gets(str);	
	token = strtok(str, " "); 
		
	while( token != NULL) {
		token = strtok(NULL, " "); 
		count++;	
	}
	
	printf("%d\n", count);
	
	return 0;
}
