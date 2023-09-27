#include <cstdio>
#define max(a,b) ((a)>=(b)?(a):(b))
int main() {
	int s=0,t=0,p;
	for(int i=0;i<4;i++)
		scanf("%d",&p),s+=p;
	for(int i=0;i<4;i++)
		scanf("%d",&p),t+=p;
	printf("%d\n",max(s,t));
}