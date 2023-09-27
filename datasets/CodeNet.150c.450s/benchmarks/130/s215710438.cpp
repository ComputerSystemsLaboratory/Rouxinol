#include <cstdio>
#include <iostream>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

#define rep(i,a,n) for(int (i)=a;(i)<(int)(n);(i)++)
#define rrep(i,a,n) for(int (i)=(n)-1;(i)>=a;(i)--)
#define all(x) (x).begin(),(x).end()

typedef long long ll;

const int INF = 1e9;

int main() {
    int n, m;
	cin >> n >> m;
	int a[n][m], b[m];
	rep(i,0,n) rep(j,0,m) cin >> a[i][j];
	rep(i,0,m) cin >> b[i];

	rep(i,0,n) {
		int tmp = 0;
		rep(j,0,m) {
			tmp += a[i][j] * b[j];
		}
		cout << tmp << endl;
	}	
}