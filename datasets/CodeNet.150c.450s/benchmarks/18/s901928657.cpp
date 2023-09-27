#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int res = 100000;
	while(n-- > 0){
		res = res * 1.05;
		if(res % 1000)
			res = res / 1000 * 1000 + 1000;
	}
	cout << res << endl;
	return 0;
}