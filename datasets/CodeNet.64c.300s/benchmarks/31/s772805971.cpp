#include <cstdio>

int main(){
	int x, a[30];
	for(int i = 0;i < 30;i++)a[i] = 0;
	for(int i = 0;i < 28;i++)scanf("%d", &x), a[x-1] = 1;
	for(int i = 0;i < 30;i++)if(!a[i])printf("%d\n", i+1);
	return 0;
}