#include <cstdio>
int main() {
	int N,M,P;
	while(scanf("%d %d %d",&N,&M,&P),N) {
		int sum=0,size=0;
		for(int i=0;i<N;i++) {
			int X;
			scanf("%d",&X);
			sum+=X;
			if(i==M-1) size=X;
		}
		sum*=100-P;
		if(size==0) {
			printf("0\n");
		}else {
			printf("%d\n",sum/size);
		}
	}
}