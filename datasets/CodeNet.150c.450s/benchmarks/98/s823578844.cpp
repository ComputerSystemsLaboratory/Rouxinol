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
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	int n, m;
	VI ns, ms;
	while(1){
		int ans_n = -1, ans_m = -1;
		ns.clear();
		ms.clear();
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		rep(i, n){
			int a;
			cin >> a;
			ns.pb(a);
		}
		rep(i, m){
			int a;
			cin >> a;
			ms.pb(a);
		}

		sort(rall(ns));
		sort(rall(ms));

		rep(i, n){
			rep(j, m){
				VI a, b;
				a = ns;
				b = ms;
				swap(a[i], b[j]);
				if(accumulate(all(a), 0) == accumulate(all(b), 0)){
					ans_n = ns[i];
					ans_m = ms[j];
				}
			}
		}
		
		if(ans_n == -1){
			cout << -1 << endl;
		} else {
			cout << ans_n << " " << ans_m << endl;
		}
	}
	return 0;
}