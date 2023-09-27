#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
const double PI = 3.14159265358979;
const double E = 2.718281828459045;
const double root2 = sqrt(2);
typedef pair<int, int> P;
typedef unsigned int ui;
int main() {
	int e;
	while (cin >> e) {
		if (e == 0)break;
		int m = (int)MOD;
		for (int i = 0; i <= 1000; i++) {
			for (int j = 0; j <= 100; j++) {
				if (i*i + j * j*j <= e) {
					m = min(m, i + j + e - i * i - j * j*j);
				}
			}
		}
		cout << m << endl;
	}
	return 0;
}

