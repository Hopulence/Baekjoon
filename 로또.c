#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print_num(int a[], int n);

int main() {
	int lottery[6] = {0}; // ���� �迭 
	int winning_num[7] = {0}; // ��÷ �迭 
	int i,j, count=0, bonus=0;

	srand((unsigned)time(NULL)); 
	
	// ���� ���� ���� 
	for(i=0; i<6; i++) {
		lottery[i] = 1+rand()%45; //[1,45] ���� ���� 
		for(j=0;j<i;j++) {
			if(lottery[i] == lottery[j])
				i--; //�ߺ� ���� 
		}
	}
	printf("���� ��ȣ :");
	print_num(lottery, 6);
	printf("\n\n");

	// ��÷ ���� ���� 
	for(i=0; i<7; i++) {
		winning_num[i] = 1+rand()%45;
		for(j=0;j<i;j++)
			if(winning_num[i] == winning_num[j])
				 i--; //�ߺ� ���� 
	}
	printf("��÷ ��ȣ :");
	print_num(winning_num, 6);
	printf("+ %2d\n", winning_num[6]);

	//��÷ Ȯ�� 
	for(i=0;i<6;i++) 
		for(j=0;j<6;j++) 
			if(lottery[i] == winning_num[j])
				count++;
	
	//���ʽ� Ȯ��
	for(i=0; i<6; i++)
		if(lottery[i] == winning_num[7]) bonus = 1;
	
	printf("\n");
	switch(count) {
		case 6:
			printf("100��\n");
			break;
			
		case 5:
			if(bonus == 1)	printf("80��\n");
			if(bonus == 0)	printf("60��\n");
			break;
			
		case 4:
			printf("40��\n");
			break;
			
		case 3:
			printf("20��\n");
			break;
			
		default:
			printf("Ʋ�Ƚ��ϴ�.\n");
			break;
	}
	
	return 0;
}

void print_num(int a[], int n) {
	int i;
	
	for(i=0;i<n;i++)
		printf("  %2d  ", a[i]);
}
