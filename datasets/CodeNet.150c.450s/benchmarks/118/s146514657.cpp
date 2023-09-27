#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VII;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int n;
VI ys, ms, ds;

int y_days = 20 * 5 + 19 * 5;
int sy_days = 200;
int bm_days = 20;
int sm_days = 19;

int solve(int now){
	int ans = 0;
	REP(i, ys[now], 1000){
		if(ys[now] != i){
			ans += (i % 3)? y_days : sy_days;
		}else{
			REP(j, ms[now], 11){
				if(ms[now] != j){
					ans += (i % 3 == 0 || j % 2)? bm_days : sm_days;
				}else{
					int dlimit = (i % 3 == 0 || j % 2)? bm_days : sm_days;
					REP(k, ds[now], dlimit + 1){
						ans++;
					}
				}
			}
		}
	}
	return ans;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	cin >> n;
	rep(i, n){
		int y, m, d;
		cin >> y >> m >> d;
		ys.pb(y);
		ms.pb(m);
		ds.pb(d);
	}
	rep(i, n){
		cout << solve(i) << endl;
	}
	return 0;
}