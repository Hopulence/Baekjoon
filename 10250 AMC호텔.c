#include<stdio.h>

int main() {
	int test_case;
	int i=0;
	int H,W,N; //층, 방 , 손님 
	int h,w;
	
	scanf("%d", &test_case);
	int room[test_case];
	
	
	while(i<test_case) {
		scanf("%d %d %d", &H, &W,&N);
		h=1, w=1;
		
		while(H<N) {
			N=N-H;
	
			w++;
		}
		h=N;
		
			
		room[i] = 100*h + w;
		
		i++;
	}
	
	for(i=0;i<test_case;i++)
		printf("%d\n", room[i]);
	
	return 0;
}
