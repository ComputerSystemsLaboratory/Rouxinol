#include "bits/stdc++.h"
using namespace std;
static const int MAX = 200000;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a < b) && (b < c))
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;
	return 0;
}
