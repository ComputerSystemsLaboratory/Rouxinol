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
int rev(int x,int t) {
	int z[6];
	for (int i = 0; i < t; i++) {
		z[i] = x % 10;
		x /= 10;
	}
	sort(z, z+t);
	int ma = 0; int mi = 0;
	for (int i = 0; i < t; i++) {
		ma += z[i]*(int)(pow(10, i)+0.0001);
		mi += z[i] * (int)(pow(10, t-1-i) + 0.0001);
	}
	return ma - mi;
}
int main() {
	int a, l;
	while (cin >> a >> l) {
		if (l == 0)break;
		vector<int>A;
		A.push_back(a);
		bool f = true;
		while (f) {
			a = rev(a, l);
			for (int i = 0; i < (int)A.size(); i++) {
				if (a == A[i]) {
					cout << i << " " << a <<" "<< (int)A.size()-i << endl;
					f = false;
				}
				if (!f)break;
			}
			A.push_back(a);
		}
	}
	return 0;
}

