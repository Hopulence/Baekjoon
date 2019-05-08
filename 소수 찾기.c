#include<stdio.h>
#include<stdlib.h>

int prime_check(int n);

int main() {
    int n,i,j;
    int cout=0;
    scanf("%d", &n);
    int *prime = malloc(sizeof(int)*n);

    for(i=0; i<n; i++) 
    	scanf("%d", prime+i);
    

    for(j=0; j<=i; j++)
        if(prime_check(prime[j]))
            cout++;
    
    printf("%d\n", cout);
    
    free(prime);
    return 0;
}

int prime_check(int n) {
    int i;
    if(n<2)    return 0;//FALSE
    for(i=2;i<n;i++) {
        if(n%i == 0)
            return 0; //FALSE
    }
    return 1; //TRUE
}
