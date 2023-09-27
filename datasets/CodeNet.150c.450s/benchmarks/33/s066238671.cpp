#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int f(int a, int r) {
	return (int)((double)a*(100.0+r)/100.0);
}

signed main() {
	int x, y, s;
	while (1) {
		cin >> x >> y >> s;
		if (x + y + s == 0) break;
		int MAX = 0;
		rep(i, 1, 1000) {
			rep(j, 1, 1000) {
				int tmp = f(i,x) + f(j,x);
				if(tmp==s){
					MAX = max(MAX, f(i, y) + f(j, y));
				}
				else if (tmp > s) break;
			}
		}
		cout << MAX << endl;
	}
}