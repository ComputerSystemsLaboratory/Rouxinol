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
	cin>>N;
	vector<int>ans;
	rep(i,0,N){
		int y,m,d;
		cin>>y>>m>>d;
		int cnt = 0;
		while(1){
			if(y==1000&&m==1&&d==1)break;
			d++;
			if(y%3&&m%2==0&&d==20){
				m++;
				d=1;
			}
			if(d==21){
				m++;
				d=1;
			}
			if(m==11){
				y++;
				m=1;
			}
			cnt++;
		}
		ans.push_back(cnt);
	}
	for(auto e:ans){
		cout<<e<<endl;
	}
}

