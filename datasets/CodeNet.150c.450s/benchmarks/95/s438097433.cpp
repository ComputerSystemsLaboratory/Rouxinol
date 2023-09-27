#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n = 1, ans = 0;
	
	cin >> n;
	while (n > 0) {
		vector<string> s(n);
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}

		for (int i = 0; i < n-1; i++) {
			if (s[i][1] == s[i+1][1]) {
				ans++;
			}
		}
		cout << ans << endl;
		ans = 0;

		cin >> n;
	}

	return 0;
}
