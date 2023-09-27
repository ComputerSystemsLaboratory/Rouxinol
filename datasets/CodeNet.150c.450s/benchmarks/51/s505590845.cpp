#include <cstdio>
bool submit[30];
int main() {
	int n;
	for(int i=0;i<28;i++)
		scanf("%d",&n),submit[n-1]=1;
	for(int i=0;i<30;i++)
		if(!submit[i]) printf("%d\n",i+1);
}