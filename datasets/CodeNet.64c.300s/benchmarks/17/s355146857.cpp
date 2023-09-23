#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(a) (a).begin(), (a).end()

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int tax(int p, int x){
	return p*(double)(100+x)/(double)100;
}

int main(){
	int x, y, s;
	while(cin >> x >> y >> s, x+y+s){
		int ret = 0;
		rep(i, 1010)rep(j, 1010){
			if(i == 0 || j == 0) continue;
			if(tax(i, x)+tax(j, x) == s) ret = max(ret, tax(i, y)+tax(j, y));
		}
		cout << ret << endl;
	}
}