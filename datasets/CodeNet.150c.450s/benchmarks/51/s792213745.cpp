#include <cstdio>
int main() {
	int s[30]={0},n;
	for(int i=0;i<28;i++) {
		scanf("%d",&n);
		s[n-1]=1;
	}
	for(int i=0;i<30;i++) {
		if(!s[i])printf("%d\n",i+1);
	}
}