#include<functional>
#include<algorithm>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<utility>
#include<string>
#include<cstdio>
#include<vector>
#include<bitset>
#include<cmath>
#include<ctime>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
using namespace std;
const int inf=2147483647,dx[]={-1,0,1,0},dy[]={0,-1,0,1};// 上 左 下 右
const int N=100005,M=1000005,K=200005,mod=1000000007;
const long long llinf=9223372036854775807ll;
//int & long long
int n,m,a,b,ans[N];
vector<int> v[N];
bool u[N];
queue<int> q;
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a); 
	}
	cout<<"Yes\n";
	q.push(1);
	u[1]=true;
	while(q.size())
	{
		int l=q.size();
		for(int i=1;i<=l;i++)
		{
			int x=q.front();
			q.pop();
			for(int j=0;j<v[x].size();j++)
				if(!u[v[x][j]])
					u[v[x][j]]=true,q.push(v[x][j]),ans[v[x][j]]=x;
		}
	}
	for(int i=2;i<=n;i++)
		cout<<ans[i]<<'\n';
	return 0;
}