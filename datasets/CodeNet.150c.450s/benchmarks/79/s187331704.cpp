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


int dy[]={0,1,0,-1};
int dx[]={1,0,-1,0};

signed main()
{
	IOS();
	int N,M;
	vector<int>ans;
	while(1){
		cin>>N>>M;
		if(N==0&&M==0)break;
		vector<int>a(N);
		rep(i,0,N)a[i]=N-i-1;
		rep(i,0,M){
			int P,C;
			cin>>P>>C;
			P--;
			vector<int>tmp;
			rep(j,P,P+C){
				tmp.push_back(a[j]);
			}
			rep(j,0,P){
				tmp.push_back(a[j]);
			}
			rep(j,0,tmp.size())a[j] = tmp[j];
		}
		ans.push_back(a[0]);
	}
	for(auto e:ans)cout<<e+1<<endl;
}

