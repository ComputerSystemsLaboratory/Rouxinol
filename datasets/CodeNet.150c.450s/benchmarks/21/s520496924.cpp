#include<cstdio>

int main(){
	char line[4];
	int x;
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &x);
	printf("%d\n", x * x * x);
	return 0;
}