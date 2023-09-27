#define _USE_MATH_DEFINES
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<list>
#include<stack>
#include<queue>
#include<cctype>
#include<iomanip>
#include<functional>
#include<numeric>
#define EPS 1e-10
using namespace std;
typedef long long llong;
int main() {
	int a[4], b[4];
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		int hit = 0, blow = 0;
		for (int i = 0; i < 4; i++) {
			if (a[i] == b[i])hit++;
			for (int j = 0; j < 4; j++) {
				if (i == j)continue;
				if (a[i] == b[j])blow++;
			}
		}
		cout << hit << " " << blow << endl;
	}
	return 0;
}