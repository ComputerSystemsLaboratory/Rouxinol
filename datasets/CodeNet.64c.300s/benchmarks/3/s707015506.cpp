#include<stdio.h>
using namespace std;

int main(void){
	int n, o[100];
	scanf("%d", &n);
	for(int i = 0; i < n; ++i){
		scanf("%d", &o[i]);
	}
	for(int i = n; i > 0; --i){
		printf("%d", o[i-1]);
		if(i == 1){
			break;
		}
		printf(" ");
	}
	printf("\n");
	return 0;
}