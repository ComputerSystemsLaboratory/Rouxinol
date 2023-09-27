#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string.h>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;

double x[5];
double y[5];

int main()
{
	while (cin >> x[0] >> y[0]) {
		for (int i = 1; i < 4; i++) {
			cin >> x[i] >> y[i];
		}

		double abc = fabs((x[1] - x[0])*(y[2] - y[0]) - (x[2] - x[0])*(y[1] - y[0]));
		double pab = fabs((x[0] - x[3])*(y[1] - y[3]) - (x[1] - x[3])*(y[0] - y[3]));
		double pbc = fabs((x[1] - x[3])*(y[2] - y[3]) - (x[2] - x[3])*(y[1] - y[3]));
		double pca = fabs((x[2] - x[3])*(y[0] - y[3]) - (x[0] - x[3])*(y[2] - y[3]));

		if (fabs(abc - pab - pbc - pca) < EPS)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}