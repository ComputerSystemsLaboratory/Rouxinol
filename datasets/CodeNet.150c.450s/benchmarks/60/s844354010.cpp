#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<bitset>
#include<vector>
#include<deque>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<cmath>
#include<iomanip>
#include <functional>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
const int INF = 1 << 28;
//cout << fixed << std::setprecision(9)
//memset(a, 0, sizeof(a));
//--------------------------


int n;
int g[110][110];

int main()
{
	cin >> n;
	int v, k, u;
	for (int i = 0; i < n; i++) {
		cin >> v >> k;
		v--;
		for (int j = 0; j < k; j++) {
			cin >> u;
			u--;
			g[v][u] = 1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j) {
				cout << " " << g[i][j];
			}
			else {
				cout << g[i][j];
			}
		}
		cout << endl;
	}

	return 0;
}