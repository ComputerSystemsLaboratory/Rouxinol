#include <cstdio>

int m,nmin,nmax,p[200];

int main(){
	while(scanf("%d%d%d",&m,&nmin,&nmax), m != 0){
		for(int i = 0; i < m; i++){
			scanf("%d",&p[i]);
		}
		int gap = -1, n = 0;
		for(int i = nmin; i <= nmax; i++){
			int tmp = p[i-1] - p[i];
			if(tmp >= gap){
				gap = tmp;
				n = i;
			}
		}
		printf("%d\n",n);
	}
	return 0;
}