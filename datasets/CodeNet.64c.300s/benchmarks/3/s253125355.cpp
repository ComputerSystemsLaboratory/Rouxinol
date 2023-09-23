#include<stdio.h>

int main(void){
	int n;
	scanf("%d\n",&n);
	int kazu[100];
	int i;
    for ( i = 0; i < n; i++ ){
		scanf("%d",&kazu[i]);
    }
	i=0;
    for ( i = 0; i < n; i++ ){
        if ( i ) printf(" ");
        printf("%d", kazu[n-i-1]);
    }
    printf("\n");
	return 0;
}