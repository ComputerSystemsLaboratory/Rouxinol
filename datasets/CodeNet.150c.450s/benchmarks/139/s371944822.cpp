#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;
typedef long long ll;
#define INF 1LL<<62
#define inf 1000000007

int main() {
	ll n,m;
	cin>>n>>m;
	vector<ll>ch[100010];
	for(ll i=0;i<m;i++){
		ll x,y;
		cin>>x>>y;
		x--;y--;
		ch[x].push_back(y);
		ch[y].push_back(x);
	}
	ll ans[100010];
	for(ll i=0;i<n;i++){
		ans[i]=-1;
	}
	queue<ll>q;
	ans[0]=0;
	q.push(0);
	while(q.size()!=0){
		ll now=q.front();
		q.pop();
		//cout <<now<<endl;
		for(ll i=0;i<ch[now].size();i++){
			ll next=ch[now][i];
		//	cout <<next<<endl;
			if(ans[next]!=-1){
				continue;
			}
			ans[next]=now;
			q.push(next);
		}
	}
	cout <<"Yes"<<endl;
	for(ll i=1;i<n;i++){
		cout <<ans[i]+1<<endl;
	}
	// your code goes here
	return 0;
}