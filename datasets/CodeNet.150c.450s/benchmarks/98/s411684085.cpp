#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
typedef pair<int, int> P;
typedef unsigned int ui;
int main(){
	int n, m,s;
	int i,j;
	while (cin >> n >> m) {
		if (n == 0 && m == 0)break;
		int a[100], b[100];
		int suma = 0; int sumb = 0;
		for (i = 0; i < n; i++) {
			cin >> s; a[i] = s; suma += s;
		}
		for (i = 0; i < m; i++) {
			cin >> s; b[i] = s; sumb += s;
		}
		int mi = (int)MOD;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if ((a[i] - b[j]) * 2 == suma - sumb&&a[i]<mi) {
					mi = a[i];
				}
			}
		}
		if (mi == (int)MOD)cout << -1 << endl;
		else cout << mi << " " << mi - (suma - sumb) / 2 << endl;
	}
	return 0;
}
