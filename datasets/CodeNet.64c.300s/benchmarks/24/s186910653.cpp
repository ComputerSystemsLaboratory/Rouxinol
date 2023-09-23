#include <iostream>
using namespace std;

int main()
{
	int n;
	do {
		cin >> n;
		int score_a = 0, score_b = 0;
		for (int i = 0; i < n; i++) {
			int inp_a, inp_b;
			cin >> inp_a >> inp_b;
			if (inp_a == inp_b) {
				score_a += inp_a;
				score_b += inp_b;
			}
			else {
				(inp_a>inp_b ? score_a : score_b) += inp_a + inp_b;
			}
		}
		if (n > 0 && n <= 10000) {
			cout << score_a << ' ' << score_b << '\n';
		}
	} while (n > 0 && n <= 10000);

	return 0;
}