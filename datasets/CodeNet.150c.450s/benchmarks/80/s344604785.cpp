#include <cstdio>
#define MAX(a,b)((a)>=(b)?(a):(b))
int main() {
	int S,T;
	int i,m,s,e;
	scanf("%d %d %d %d",&i,&m,&s,&e);
	S=i+m+s+e;
	scanf("%d %d %d %d",&i,&m,&s,&e);
	T=i+m+s+e;
	printf("%d\n",MAX(S,T));
}