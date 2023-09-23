#include<cstdio>

int main(){
	int S, h, m, s;
	0<=S&&S<86400;
	scanf("%d\n", &S);
	h=S/3600;
	m=(S%3600)/60;
	s=(S%3600)%60;
	printf("%d:%d:%d\n", h, m, s);

	return 0;
}