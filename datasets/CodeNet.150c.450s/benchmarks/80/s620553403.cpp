#include <cstdio>

int main(){
	int a[5], b[5];a[4] = b[4] = 0;
	for(int i = 0;i < 4;i++){scanf("%d", &a[i]);a[4] += a[i];}
	for(int i = 0;i < 4;i++){scanf("%d", &b[i]);b[4] += b[i];}
	if(a[4] >= b[4])printf("%d\n", a[4]);
	else printf("%d\n", b[4]);
	return 0;
}