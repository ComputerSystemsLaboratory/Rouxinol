#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;
	
	int count = 0;
	for(int i = a; i <= b; i++) {
		if(c % i == 0) count++;
	}
	
	cout << count << "\n";
	
	return 0;
}