#include<cstdio>
using namespace std;
int v[1001],w[1001],va[101][10001];
int main(void)
{
	int N,W,i,j,max;

	scanf("%d %d",&N,&W);
	for(i=0;i<N;i++) scanf("%d %d",&v[i],&w[i]);
	for(i=0;i<=N;i++){
		for(j=0;j<=W;j++){
			va[i][j]=-1;
		}
	}
	va[0][0]=0;
	for(i=0;i<N;i++){
		for(j=0;j<=W;j++){
			if(va[i][j]!=-1){
				if(va[i+1][j+w[i]]<va[i][j]+v[i] && j+w[i]<=W){
					va[i+1][j+w[i]]=va[i][j]+v[i];
				}
				if(va[i+1][j]<va[i][j]){
					va[i+1][j]=va[i][j];
				}
			}
		}
	}
	max=-1;
	for(i=0;i<=W;i++){
		if(max<va[N][i]) max=va[N][i];
	}
	printf("%d\n",max);
	return 0;
}