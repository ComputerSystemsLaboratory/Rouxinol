#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <deque>
 
using namespace std;
 
#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define pb push_back
#define mp make_pair
#define all(r) r.begin(),r.end()
#define fi first
#define se second
#define println(X) cout<<X<<endl;
#define DBG(X) cout<<#X<<" : "<<X<<endl;
 
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


const int INF = 1e9;

double EPS = 1e-10;

int d[15][10010];

int main(){
	int r, c, ans = 0;
	int a, s, t;
	while(cin>>r>>c){
		if(r==0&&c==0) break;
		rep(i, r){
			rep(j, c) cin>>d[i][j];
		}
		ans = 0;
		for(int i = 0; i < (1<<r); i++){
			a = 0;
			for(int j = 0; j < c; j++){
				s = t = 0;
				for(int k = 0; k < r; k++){
					if((1<<k)&i){
						if(d[k][j]==1) s++;
						else t++;
					}
					else {
						if(d[k][j]==0) s++;
						else t++;
					}
				}
				a+=max(s, t);
			}
			ans = max(ans, a);
		}
		cout<<ans<<endl;
	}

}