#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PI;

int main() {
	int a, b;
	cin >> a >> b;
	if (a < b)
		cout << "a < b" << endl;
	else if (a == b)
		cout << "a == b" << endl;
	else
		cout << "a > b" << endl;
	return 0;
}
