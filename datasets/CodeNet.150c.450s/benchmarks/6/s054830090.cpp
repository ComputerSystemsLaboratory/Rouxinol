#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PI;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && b < c)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
