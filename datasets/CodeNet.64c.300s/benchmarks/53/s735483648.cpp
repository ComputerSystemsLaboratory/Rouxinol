#include<cstdio>

int main(){
	int a, b, c, x;
	int n = 0;
	scanf("%d %d %d", &a, &b, &c);
	for(int x = a; x <= b; x++){
		if(c%x != 0) continue;
		n++;
	}

	printf("%d\n", n);

	return 0;
}