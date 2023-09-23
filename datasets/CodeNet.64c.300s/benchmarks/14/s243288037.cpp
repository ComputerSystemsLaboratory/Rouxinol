#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int a, b;
	cin >> a >> b;
	
	if(a < b) cout << "a < b" << "\n";
	else if(a > b) cout << "a > b" << "\n";
	else cout << "a == b" << "\n";

	return 0;
}