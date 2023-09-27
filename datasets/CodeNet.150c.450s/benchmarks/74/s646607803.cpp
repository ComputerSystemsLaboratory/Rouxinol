#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int n,m;
const int max_size_n=50050;
const int max_size_m=22;
int d[max_size_m]={0};
int t[max_size_n];
int INF = (1<<30)-1;
int main()
{
	cin >> n >> m;
	for(int i=0;i<m;i++)
		cin >> d[i];
	for(int j=0;j<=n;j++)
	{
		t[j]=INF;
	}
	t[0]=0;
	for(int i=0;i<m;i++)
	for(int j=d[i];j<=n;j++){
		t[j]=min(t[j],t[j-d[i]]+1);
	}
	cout << t[n] <<endl;
	return 0;
}
