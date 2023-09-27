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

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	int x, y, s;
	while(1){
		int ans = 0;
		cin >> x >> y >> s;
		if (x == 0 && y == 0 && s == 0) break;
		int price = (100.0 * s) / (100 + x) + 0.5;
		REP(i, 1, price + 1){
			REP(j, 1, price + 1){
				int a_sx = (100.0 + x) * i / 100.0;
				int b_sx = (100.0 + x) * j / 100.0;
				if(a_sx + b_sx == s){
					int a_sy = (100.0 + y) * i / 100.0;
					int b_sy = (100.0 + y) * j / 100.0;
					ans = max(a_sy + b_sy, ans);
				}				
			}
		}
		cout << ans << endl;
	}
	return 0;
}