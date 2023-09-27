#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n,m;
	cin>>n>>m;
	vector<ll>ans(n+1,-1);
	ans[1]=0;
	vector<vector<ll>>v(n+1);
	for(int i=0;i<m;i++){
		ll a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	queue<ll>que;
	que.push(1);
	while(!que.empty()){
		ll x=que.front();
		que.pop();
		for(ll num:v[x]){
			if(ans[num]!=-1)continue;
			ans[num]=x;
			que.push(num);
		}
	}
	cout<<"Yes\n";
	for(int i=2;i<=n;i++)cout<<ans[i]<<endl;
	return 0;
}
