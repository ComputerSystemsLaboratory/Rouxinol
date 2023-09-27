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

ll d[22];

int main()
{
	int n;
	cin >> n;

	d[1] = 1;
	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] * i;
	}
	cout << d[n] << endl;
	
	return 0;
}