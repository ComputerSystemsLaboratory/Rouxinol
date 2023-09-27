#include <cstdio>
int main (int argc, char const* argv[])
{
	int S=0,T=0,P;
	for(int i=0;i<4;i++) {
		scanf("%d",&P);
		S+=P;
	}
	for(int i=0;i<4;i++) {
		scanf("%d",&P);
		T+=P;
	}
	printf("%d\n",S>=T?S:T);
	return 0;
}