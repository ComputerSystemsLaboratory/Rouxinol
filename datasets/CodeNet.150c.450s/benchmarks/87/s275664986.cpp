#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, s, n) for (int i = (s); i < (n); i++)
#define RFOR(i, s, n) for (int i = (n) - 1; i >= (s); i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, 0, n)
#define ALL(a) a.begin(), a.end()
#define IN(a, x, b) (a <= x && x < b)
const long long MOD = 1e9+7, INF = 1e18;
template<class T>inline bool CHMAX(T&a,T b){if(a<b){a=b;return true;}return false;}
template<class T>inline bool CHMIN(T&a,T b){if(a>b){a=b;return true;}return false;}

int N;

int chain(int i,vector<vector<int>>&stone){
	REP(l,5){
		RFOR(r,l+2,5){
			int t = -INF;
			FOR(j,l,r+1){
				if(stone[i][j]==-1)break;
				if(t == -INF)t = stone[i][j];
				else{
					if(t != stone[i][j])break;
				}
				if(j == r){
					FOR(k,l,r+1)stone[i][k] = -1;
					return t * (r+1-l);
				}
			}
		}
	}
	return 0;
}

int solve(){
	vector<vector<int>>stone(N,vector<int>(5));
	REP(i,N)REP(j,5)cin>>stone[i][j];
	int score = -1,ret = 0;
	int loop = 0;
	while(score){
		score = 0;
		REP(i,N)score += chain(i,stone);
		int flg;
		do{
			flg = 0;
			REP(i,N-1)REP(j,5)if(stone[i+1][j] == -1 && stone[i][j] != -1){
				swap(stone[i+1][j],stone[i][j]);
				flg = 1;
			}
		}while(flg);
		ret += score;
		loop++;
	}
	return ret;
}

signed main(){
	vector<int>ans;
	while(cin>>N,N)ans.push_back(solve());
	for(auto e:ans)cout<<e<<endl;
}
