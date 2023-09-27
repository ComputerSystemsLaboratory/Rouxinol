#include<cstdio>
#include<cstring>
int main(void){
	char a[21];
	int c;
	scanf("%s", a);
	c = strlen(a);
	for (int i = 1; i <= c; i++)printf("%c", a[c - i]);
	printf("\n");
	return 0;
}