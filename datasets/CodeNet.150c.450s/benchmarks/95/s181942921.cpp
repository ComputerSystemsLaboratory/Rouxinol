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
		int N;
		cin>>N;
		if(N==0)break;
		int flg = 0,l = 0,r = 0,cnt = 0;
		while(N--){
			string s;
			cin>>s;
			if(s == "ld")l = 0;
			else if(s == "lu")l = 1;
			else if(s == "rd")r = 0;
			else r = 1;
			if(flg == 0 && l && r){
				cnt++;
				flg ^= 1;
			}else if(flg && l == 0 && r == 0){
				cnt++;
				flg ^= 1;
			}
		}
		ans.push_back(cnt);
	}
	for(auto e:ans){
		cout<<e<<endl;
	}
}

