#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 1000000000
#define EPS 1.0e-10

using namespace std;

typedef long long ll;

int n;

int main()
{
	while (cin >> n) {
		if (n == 0)return 0;
		ll d[5250];
		
		d[0] = 0;
		int a;
		for (int i = 1; i <= n; i++) {
			cin >> a;
			d[i] = d[i - 1] + a;
		}
		ll max = -INF;
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < i; j++) {
				if (d[i] - d[j] > max)max = d[i] - d[j];
			}
		}
		cout << max << endl;
	}

}