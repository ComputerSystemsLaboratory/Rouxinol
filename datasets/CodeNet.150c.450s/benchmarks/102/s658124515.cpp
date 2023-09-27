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
	int H,W;
	vector<int>ans;
	while(1){
		cin>>W>>H;
		if(H==0&&W==0)break;
		string s[H];
		rep(i,0,H)cin>>s[i];
		queue<pair<int,int>>que;
		rep(i,0,H){
			rep(j,0,W){
				if(s[i][j]=='@')que.push({i,j});
			}
		}
		vector<vector<int>>visit(H,vector<int>(W,0));
		while(!que.empty()){
			int i = que.front().fi;
			int j = que.front().se;
			que.pop();
			if(visit[i][j])continue;
			visit[i][j] = true;
			rep(k,0,4){
				int ni = i + dx[k];
				int nj = j + dy[k];
				if(ni<0||nj<0||H<=ni||W<=nj)continue;
				if(s[ni][nj]=='#')continue;
				if(visit[ni][nj])continue;
				que.push({ni,nj});
			}
		}
		int res = 0;
		rep(i,0,H)rep(j,0,W)if(visit[i][j])res++;
		ans.push_back(res);
	}
	for(auto e:ans){
		cout<<e<<endl;
	}
}

