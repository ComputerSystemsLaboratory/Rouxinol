#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
#include <ctype.h>
#include <cstdlib>
#include <string.h>
#include <cmath>
#include <cstdio>
#include <map>
#include <queue>
#include <utility>

using namespace std;

const int INF = 1000000007;
const double PI = acos(-1.0);
typedef long long llong;
int n, q, a[20];

bool search(int i, int sum)
{
	if (sum == 0) return 1;
	if (i >= n) return 0;

	return search(i + 1, sum) || search(i + 1, sum - a[i]);
}


int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> q;
	vector<int> vec(q);
	for (int i = 0; i < q; i++)
	{
		cin >> vec[i];
		cout << (search(0, vec[i]) ? "yes" : "no") << endl;
	}

	return 0;



}