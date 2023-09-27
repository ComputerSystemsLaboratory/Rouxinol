#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(a) (a).begin(), (a).end()

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
	int n, r;
	int card[55];
	int a[55], b[55];
	while(cin >> n >> r, n+r){
		rep(i, n) card[i] = n-i;
		int p, c;
		for(int i=0; i< r; i++){
			rep(i, 55){ a[i] = 0; b[i] = 0;}
			cin >> p >> c;

			rep(i, p-1) a[i] = card[i];
			rep(i, c) b[i] = card[p+i-1];
			rep(i, c) card[i] = b[i];
			rep(i, p-1) card[i+c] = a[i];

		}
		cout << card[0] << endl;
	}
}