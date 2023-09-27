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
	while(1){
		cin>>N;
		if(N==0)break;
		set<pair<int,int>>st;
		rep(i,0,N){
			int a,b;
			cin>>b>>a;
			a-=10;
			b-=10;
			st.insert({a,b});
		}
		int cnt = 0;
		int Q;
		cin>>Q;
		int i = 0,j = 0;
		while(Q--){
			char c;
			int t;
			cin>>c>>t;
			while(t--){
				if(c=='N')i++;
				else if(c=='S')i--;
				else if(c=='E')j++;
				else j--;
				if(st.count({i,j})){
					cnt++;
					st.erase({i,j});
				}
				
			}
		}
		ans.push_back(N==cnt);
	}
	for(auto e:ans){
		if(e)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}

