#include<bits/stdc++.h>
#define MOD 1000000007
#define EPS (1e-10)
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3f
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	int cnt = 0;
	rep(i, n) {
		int a; cin >> a;
		for (int i = 2; i*i <= a; i++) {
			if (a%i == 0)goto g;
		}
		cnt++;
	g:;
	}
	cout << cnt << endl;
}