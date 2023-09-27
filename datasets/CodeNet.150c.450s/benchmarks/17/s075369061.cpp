#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	vector<int> a(5);
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	sort(a.rbegin(), a.rend());
	cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;
	return 0;
}