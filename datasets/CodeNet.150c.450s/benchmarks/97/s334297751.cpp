#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

int x[500],y[500];
int n,d,N;
int sx[4]={-1,0,1,0};
int sy[4]={0,-1,0,1};
int main(void){
	while(1){
		scanf("%d",&N);
		if(N==0)break;
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		int x_min=0,x_max=0,y_min=0,y_max=0;
		for(int i=1;i<N;i++){
			scanf("%d %d",&n,&d);
			x[i]=x[n]+sx[d];
			y[i]=y[n]+sy[d];
			x_min=min(x_min,x[i]);
			x_max=max(x_max,x[i]);
			y_min=min(y_min,y[i]);
			y_max=max(y_max,y[i]);
		}
		printf("%d %d\n",x_max-x_min+1,y_max-y_min+1);
	}
	return 0;
}