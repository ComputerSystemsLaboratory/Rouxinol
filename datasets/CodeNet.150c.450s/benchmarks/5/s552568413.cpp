// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstring>

#define INF 1000001
typedef long long llong;
using namespace std;



int main() {
	int n;
	int a_i;
	vector<int> vt;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a_i;
		vt.push_back(a_i);
	}
	reverse(vt.begin(), vt.end());
	for (vector<int>::iterator it = vt.begin(); it != vt.end(); it++) {
		if (it == vt.begin())cout << *it;
		else cout << " " << *it;
	}
	cout << endl;
	return 0;
}

