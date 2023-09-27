#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;

typedef long long int lld;

const lld mod = 1e9+7;
const lld INF = 1e9;
//const lld MAXN = 1e9;

int main()
{
	string str;
	cin >> str;
	int n = str.size();

	for(int i = n-1; i >= 0; i--)
	{
		cout << str[i];
	}
	cout << endl;

	return 0;
}