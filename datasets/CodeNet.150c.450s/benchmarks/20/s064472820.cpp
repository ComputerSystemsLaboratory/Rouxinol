#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	
	int h = t/3600;
	int m = (t % 3600)/60;
	int s = t % 60;
	printf("%d:%d:%d\n", h, m, s);
	return 0;
}