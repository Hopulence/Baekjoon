#include<stdio.h>
#include<stdlib.h>

#define FALSE 0
#define TRUE 1

typedef struct NODE {
	int data;
	NODE *next=NULL;
}data;



int main() {
	int* head = stack;
	int n, i=0;
	int str[5];
	int *head;
	NODE stack;
	
	init(&stack);
	head=stack;
	
	scanf("%d", &n);
	
	while(i<n) {
		scanf("%s", str);
		
		if( ! strcmp(str, "push")) {
			
		}
		if ( ! strcmp(str, "pop")) {
			
		}
		
		if( ! strcmp(str, "size")) {
			
		}
		
		if( ! strcmp(str, "empty")) {
			
			
		}
		
		if( ! strcmp(str, "top")) {
			
		}
		
		i++;
	}
	return 0;
}

void init(NODE *stack) {
	stack->next =NULL;
}

void push(NODE *stack, int data) {
	NODE *node=malloc(sizeof(NODE));
	node->data = data;
	node->next = stack->next;
	
	if(stack->next == NULL)
		 
}
