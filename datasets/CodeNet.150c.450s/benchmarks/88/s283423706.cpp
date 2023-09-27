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

int H,W;

signed main(){
	vector<pair<int,int>>ans;
	while(cin>>H>>W,H||W){
		vector<pair<int,int>>v;
		FOR(i,1,151){
			FOR(j,i+1,151){
				v.push_back({i*i+j*j,i});
			}
		}
		sort(ALL(v));
		REP(i,v.size()){
			if(H*H+W*W<v[i].first){
				ans.push_back({v[i].second,sqrt(v[i].first-v[i].second*v[i].second)});
				break;
			}else if(H*H+W*W==v[i].first&&H<v[i].second){
				ans.push_back({v[i].second,sqrt(v[i].first-v[i].second*v[i].second)});
				break;
			}
		}
	}
	for(auto e:ans){
		cout<<e.first<<" "<<e.second<<endl;
	}
}
