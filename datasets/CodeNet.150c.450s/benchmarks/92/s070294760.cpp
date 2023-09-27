#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main() {
	int a, b;
	while (cin >> a >> b) {
		cout << to_string(a + b).length() << endl;
	}
	return 0;
}