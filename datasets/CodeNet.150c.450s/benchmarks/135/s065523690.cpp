#include<cstdio>
#include<algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

const int MX=1500*1000+1;
int n,m,H[1500],W[1500];
int h[MX],w[MX],sh,sw;

void comb(int *A,int *a,int k,int mx)
{
	fill_n(a,mx+1,0);
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
		sh=sw=0;
		rep(i,n)scanf("%d",H+i),sh+=H[i]; comb(H,h,n,sh);
		rep(i,m)scanf("%d",W+i),sw+=W[i]; comb(W,w,m,sw);
		
		int ans=0;
		rep(i,min(sw,sh)+1)ans+=h[i]*w[i];
		printf("%d\n",ans);
	}
	return 0;
}