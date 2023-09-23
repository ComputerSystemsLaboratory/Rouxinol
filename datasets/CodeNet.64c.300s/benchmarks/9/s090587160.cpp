#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 999999

using namespace std;

typedef long long ll;

int main()
{
	int n;
	cin >> n;

	int debt;
	debt = 100000;

	for (int i = 0; i < n; i++) {
		debt *= 1.05;
		if (debt % 1000 != 0)debt = (debt / 1000 + 1)*1000;
	}

	cout << debt << endl;
	return 0;
}