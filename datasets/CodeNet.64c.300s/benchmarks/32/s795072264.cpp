#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a, M, m;
	long long s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (i == 0)M = m = a;
		M = a > M ? a : M;
		m = a < m ? a : m;
		s += a;
	}
	cout << m << " " << M << " " << s << endl;
	return 0;
}