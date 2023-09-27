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

static const int N = 100;

int main()
{
	int n;
	int p[N + 1];
	int m[N + 1][N + 1];

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> p[i - 1] >> p[i];
	}

	for (int i = 1; i <= n; i++) m[i][i] = 0;

	for (int l = 2; l <= n; l++)
		for (int i = 1; i <= n - l + 1; i++) {
			int j = i + l - 1;
			m[i][j] = (1 << 27);
			for (int k = i; k < j; k++) {
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
			}
		}

	cout << m[1][n] << endl;

	return 0;
}