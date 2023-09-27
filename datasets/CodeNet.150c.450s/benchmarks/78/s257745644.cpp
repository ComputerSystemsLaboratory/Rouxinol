#include<iostream>
#include<algorithm>
using namespace std;

int a[180];
int ans[1000001];
int ansb[1000001];
const int INF=1<<28;

int main()
{
	for(int i=1;i<=180;i++)
	{
		a[i-1]=i*(i+1)*(i+2);
		a[i-1]/=6;
	}
	ans[0]=0;
	ansb[0]=0;
	for(int i=1;i<=1000000;i++)
	{
		ans[i]=10;
		ansb[i]=INF;
		for(int j=0;j<180&&i-a[j]>=0;j++)
		{
			ans[i]=min(ans[i],ans[i-a[j]]+1);
			if(j%4==0)ansb[i]=min(ansb[i],ansb[i-a[j]]+1);
		}
	}
	int n;
	while(cin>>n,n)
	{
		cout<<ans[n]<<" "<<ansb[n]<<endl;
	}
	return 0;
}