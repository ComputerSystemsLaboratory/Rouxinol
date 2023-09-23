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


int main()
{
	int n;
	cin >> n;
	int f[50];
	f[0] = f[1] = 1;
	for (int i = 2; i <= n; i++) f[i] = f[i - 1] + f[i - 2];
	cout << f[n] << endl;
	return 0;
}