#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a < b && b < c) cout << "Yes" << "\n";
	else cout << "No" << "\n";

	return 0;
}