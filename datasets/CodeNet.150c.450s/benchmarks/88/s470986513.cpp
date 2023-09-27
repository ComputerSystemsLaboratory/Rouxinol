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

signed main(){
	int h, w;
	while (1) {
		cin >> h >> w;
		if (h + w == 0) break;
		int l = h*h + w*w;
		int Minl = 40000, mh = 200, mw = 200;
		rep(i, 1, 151) {
			rep(j, i + 1, 151) {
				if (i == h && j == w) continue;
				int tmp = i*i + j*j;
				if (tmp == l && i > h) {
					Minl = l;
					mh = i;
					mw = j;
					i = 151;
					break;
				}
				else if (tmp > l && tmp < Minl) {
					Minl = tmp;
					mh = i;
					mw = j;
				}
			}
		}
		cout << mh << " " << mw << endl;
	}
}