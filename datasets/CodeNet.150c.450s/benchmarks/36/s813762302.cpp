#include <stdio.h>
#define NN 600
int f(int x){ return x*x; }
int main(){
	int d,h,s;
	while(scanf("%d",&d)!=EOF){
		s=0;
		for(h=d;h<NN;h+=d){
			s += d*f(h);
		}
		printf("%d\n",s);
	}
	return 0;
}