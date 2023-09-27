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
	int N;
	vector<int>ans;
	vector<int>cnt(1010,0);
	rep(i,1,1001){
		rep(j,i+1,1001){
			int t = (i+j)*(j-i+1)/2;
			if(t>1000)continue;
			cnt[t]++;
		}
	}
	while(1){
		cin>>N;
		if(N==0)break;
		cout<<cnt[N]<<endl;
	}
}

