#include<cstdio>
using namespace std;
static const int MAXN=100;
static const int MAXW=10000;
struct item{
	int v;
	int w;
};
int c[MAXN+1][MAXW+1];
int main(){
	int N,W,i,j;
	item a[MAXN+1];
	scanf("%d %d",&N,&W);
	for(i=1;i<N+1;i++){
		scanf("%d %d",&a[i].v,&a[i].w);
	}
	for(i=0;i<W+1;i++){
		c[0][i]=0;
	}
	for(i=0;i<N+1;i++){
		c[i][0]=0;
	}
	for(i=1;i<N+1;i++){
		for(j=1;j<W+1;j++){
			if(j-a[i].w>=0){
				c[i][j]=c[i-1][j]>c[i-1][j-a[i].w]+a[i].v?c[i-1][j]:c[i-1][j-a[i].w]+a[i].v;
			}
			else{
				c[i][j]=c[i-1][j];
			}
		}
	}
	printf("%d\n",c[N][W]);
	return 0;
}