#include<cstdio>

int main(){
	int a[] = {0,0,31,60,91,121,152,182,213,244,274,305,335,366};
	int m, d;
	char day[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday","Friday","Saturday","Sunday"};
	scanf("%d %d", &m, &d);
	while(m || d){
		printf("%s\n", day[(a[m] + d + 2) % 7]);
		scanf("%d %d", &m, &d);
	}
}