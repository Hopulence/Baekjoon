#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print_num(int a[], int n);

int main() {
	int lottery[6] = {0}; // 복권 배열 
	int winning_num[7] = {0}; // 당첨 배열 
	int i,j, count=0, bonus=0;

	srand((unsigned)time(NULL)); 
	
	// 복권 숫자 설정 
	for(i=0; i<6; i++) {
		lottery[i] = 1+rand()%45; //[1,45] 난수 대입 
		for(j=0;j<i;j++) {
			if(lottery[i] == lottery[j])
				i--; //중복 제거 
		}
	}
	printf("복권 번호 :");
	print_num(lottery, 6);
	printf("\n\n");

	// 당첨 숫자 설정 
	for(i=0; i<7; i++) {
		winning_num[i] = 1+rand()%45;
		for(j=0;j<i;j++)
			if(winning_num[i] == winning_num[j])
				 i--; //중복 제거 
	}
	printf("당첨 번호 :");
	print_num(winning_num, 6);
	printf("+ %2d\n", winning_num[6]);

	//당첨 확인 
	for(i=0;i<6;i++) 
		for(j=0;j<6;j++) 
			if(lottery[i] == winning_num[j])
				count++;
	
	//보너스 확인
	for(i=0; i<6; i++)
		if(lottery[i] == winning_num[7]) bonus = 1;
	
	printf("\n");
	switch(count) {
		case 6:
			printf("100점\n");
			break;
			
		case 5:
			if(bonus == 1)	printf("80점\n");
			if(bonus == 0)	printf("60점\n");
			break;
			
		case 4:
			printf("40점\n");
			break;
			
		case 3:
			printf("20점\n");
			break;
			
		default:
			printf("틀렸습니다.\n");
			break;
	}
	
	return 0;
}

void print_num(int a[], int n) {
	int i;
	
	for(i=0;i<n;i++)
		printf("  %2d  ", a[i]);
}
