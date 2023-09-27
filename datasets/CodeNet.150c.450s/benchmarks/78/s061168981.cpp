#include<iostream>
#include<queue>
#include<utility>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define mp make_pair
typedef pair<int,int> pi;

const int inf=1<<28;
const int MX=1000000;

int tri[1000],ntri;
int dp[MX],dpOdd[MX];

int main(){
	
	ntri=0;
	for(;;ntri++)
	{
		tri[ntri]=ntri*(ntri+1)*(ntri+2)/6;
		if(tri[ntri]>=MX)break;
	}
	
	rep(i,MX)dp[i]=dpOdd[i]=inf;
	dp[0]=dpOdd[0]=0;
	int mx=0;
	rep(i,5)rep(j,mx+1)
	{
		rep(k,ntri)
		{
			if(j+tri[k]>=MX)break;
			if(tri[k]%2==1)dpOdd[j+tri[k]]=min(dpOdd[j+tri[k]],dpOdd[j]+1);
			dp[j+tri[k]]=min(dp[j+tri[k]],dp[j]+1);
			mx=max(mx,j+tri[k]);
			mx=min(mx,MX-1);
		}
	}
	
	int n;
	while(cin>>n,n)cout<<dp[n]<<" "<<dpOdd[n]<<endl;
	
	return 0;
}