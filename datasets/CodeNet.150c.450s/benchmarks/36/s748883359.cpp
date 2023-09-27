#include <cstdio>
#define f(x)((x)*(x))
int main() {
	int d;
	while(scanf("%d",&d)!=EOF) {
		int sum=0;
		for(int i=1;i*d<=600-d;i++) {
			sum+=f(i*d)*d;
		}
		printf("%d\n",sum);
	}
}