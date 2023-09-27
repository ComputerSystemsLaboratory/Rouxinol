#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define fi first
#define se second
#define pb push_back
#define rep(i, s, n) for (int i = s; i < n; i++)
#define rrep(i, s, n) for (int i = (n)-1; i >= (s); i--)
#define all(a) a.begin(),a.end()
typedef pair<int,int>pint;
typedef vector<int>vint;
typedef vector<pint>vpint;
const long long MOD = 1000000007, INF = 1e17;
 
#define endl '\n'
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0)
 
template<class T>inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T>inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}



signed main()
{
	IOS();
	vector<int>ans;
	while(1){
		int S,X,Y;
		cin>>X>>Y>>S;
		if(S==0&&X==0&&Y==0)break;
		int res = -INF;
		rep(i,1,1000)rep(j,1,1000){
			int a = i,b = j;
			a = a * (100 + X) / 100;
			b = b * (100 + X) / 100;
			if(a+b!=S)continue;
			a = i;
			b = j;
			a = a * (100 + Y) / 100;
			b = b * (100 + Y) / 100;
			chmax(res,a+b);
		}
		ans.push_back(res);
	}
	for(auto e:ans){
		cout<<e<<endl;
	}
}

