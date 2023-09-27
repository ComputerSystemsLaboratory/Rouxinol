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
#define INF 999999
#define EPS 1.0e-10

using namespace std;

typedef long long ll;

int n;
double x[5];
double y[5];

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> x[j] >> y[j];
		}

		double k = (x[1] - x[0])*(y[3] - y[2])-(x[3] - x[2])*(y[1] - y[0]);
		if (fabs(k)< EPS)cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	
	return 0;
}