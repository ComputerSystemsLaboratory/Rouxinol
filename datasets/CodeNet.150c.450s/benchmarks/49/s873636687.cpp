#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <numeric>

using namespace std;

int main()
{
	for (int i = 4; i > 1; i++) {
		int n;
		cin >> n;
		if (n == 0) break;
		vector<int> s(n);
		for (int b = 0; b < n; b++) {
			cin >> s[b];

		}
		
		int sum = 0;      // ????¨?????±????????????°
		for (int t = 0; t < n; t++) {
			// ??¨??¨???????´?????????????
			sum += s[t];    // ????¨??????????
		}
		
		int ma;
		int mi;
		ma = *max_element(s.begin(), s.end());
		mi = *min_element(s.begin(), s.end());
		
		double score;
		score = (sum - ma - mi) / (n - 2);
		cout << score << endl;
		

	}
}