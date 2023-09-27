#include<cstdio>

int a, b, c;

bool isAscending(int a, int b, int c){
	if(a < b && b < c) return true;
	else return false;
}

int main(void){
	scanf("%d %d %d", &a, &b, &c);

	if(isAscending(a, b, c) == true) printf("Yes\n");
	else if(isAscending(a, b, c) == false) printf("No\n");

	return 0;
}