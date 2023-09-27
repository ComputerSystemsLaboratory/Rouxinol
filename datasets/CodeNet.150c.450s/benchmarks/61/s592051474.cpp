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

set<int>ng={'q','w','e','r','t','a','s','d','f','g','z','x','c','v','b'};

signed main()
{
	IOS();
	vector<int>ans;
	while(1){
		int N,A,B,C,X;
		cin>>N>>A>>B>>C>>X;
		if(N==0&&A==0&&B==0&&C==0&&X==0)break;
		vector<int>a(N);
		rep(i,0,N)cin>>a[i];
		int now = 0;
		int t = X;
		rep(i,0,10001){
			if(t==a[now]){
				if(now==N-1){
					ans.push_back(i);
					break;
				}else now++;
			}
			if(10000==i)ans.push_back(-1);
			t = (A*t+B)%C;
		}
	}
	for(auto e:ans){
		cout<<e<<endl;
	}
}

