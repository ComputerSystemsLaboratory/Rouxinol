#include <stdio.h>
#include <string.h>
#include <math.h>
#define rep(i,l,n) for(int i=(l);i<(n);i++)

int n,r,i,card[55],change[55]={0};

void shuffle(int p,int c){
	rep(i,1,c+1) change[i]=card[p-1+i];
	rep(i,1,p) change[c+i]=card[i];
	rep(i,1,c+p) card[i]=change[i];
}
int main(void){
	int c,p;
	while(1){
		r=0;
		scanf("%d %d",&n,&r);
		//printf("%d %d\n",n,r);
		if(n==0 && r==0) break;
		rep(i,1,n+1) card[i]=n+1-i;
		rep(i,0,r){
			scanf("%d %d",&p,&c);
			//printf("pc %d %d %d\n",r,p,c);
			shuffle(p,c);
		}
		printf("%d\n",card[1]);
	}
	return 0;
}