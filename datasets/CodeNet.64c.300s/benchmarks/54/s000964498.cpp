#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <functional>
#include <numeric>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <set>

using namespace std;

#define ALL(co) co.begin(), co.end()

typedef long long LL;
typedef pair<int, int> P;
typedef pair<P, P> PP;
typedef vector<int> Array;
typedef vector<int> LArray;

const int INF = 1 << 29;
const LL LINF = 1LL << 60;

int itiv;
inline int getInt() { return (cin >> itiv, itiv); }
void readAll(Array& vec, int n) { for (int i = 0; i < n; i++) cin >> vec[i]; }
inline bool between(int first, int last, int n) { return first <= n && n <= last; }
inline bool inRange(int begin, int end, int n) { return begin <= n && n < end; }
inline bool inRange(int size, int n) { return 0 <= n && n < size; }

int m, n;
int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, -1, 0, 1 };
int dr[] = { 0, -1, 0, 1 }, dc[] = { -1, 0, 1, 0 };


LL dp[101][21];

int main(void)
{
	while(cin >> n && n)
	{
		memset(dp, 0, sizeof(dp));
		dp[0][getInt()] = 1;
		for (int i = 1; i < n - 1; i++)
		{
			int num = getInt();
			for (int j = 0; j < 21; j++)
			{
				if(between(0, 20, j + num))
					dp[i][j + num] += dp[i - 1][j];
				
				if(between(0, 20, j - num))
					dp[i][j - num] += dp[i - 1][j];
			}
		}
		cout << dp[n - 2][getInt()] << endl;
	}
	return 0;
}