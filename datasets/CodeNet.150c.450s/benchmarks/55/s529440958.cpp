#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<vector>
#include<functional>
#include<stack>

using namespace std;

int main() {
	string n;
	while (cin >> n) {
		if (n == "0")break;
		int ans = 0;
		for (int i = 0; i < n.size(); i++)ans += n[i] - '0';
		cout << ans << endl;
	}
	return 0;
}