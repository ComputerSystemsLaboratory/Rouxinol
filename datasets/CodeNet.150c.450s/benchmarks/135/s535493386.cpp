#include<cstdio>
#include<algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

const int MX=1500*1000+1;
int n,m,H[1500],W[1500];
int h[MX],w[MX];

void comb(int *A,int *a,int k)
{
	fill_n(a,MX,0);
	rep(i,k)
	{
		int len=0;
		for(int j=i;j<k;j++)len+=A[j],a[len]++;
	}
}

int main()
{
	while(scanf("%d%d",&n,&m),n)
	{
		rep(i,n)scanf("%d",H+i); comb(H,h,n);
		rep(i,m)scanf("%d",W+i); comb(W,w,m);
		int ans=0;
		rep(i,MX)ans+=h[i]*w[i];
		printf("%d\n",ans);
	}
	return 0;
}