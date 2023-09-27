#include <stdio.h>

int main(void){
	int n[100];
	int a = 0;
	int m = 0;
	for(int i=0;i<100;++i){
		n[i] = 0;
	}
	while(scanf("%d", &a) != EOF){
		n[a-1]++;
	}
	for(int i=0; i<100; ++i){
		if(m < n[i]){
			m = n[i];
		}
	}
	for(int i=0; i<100; ++i){
		if(n[i] == m){
			printf("%d\n", i+1);
		}
	}
	return 0;
}