#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, r, p, c;

	while(true) {
		cin >> n >> r;
		if(n == 0 && r == 0) break;

		vector<int> cards(n);

		for(int i = 0; i < n; ++i) {
			cards.at(n - i - 1) = i + 1;
		}

		for(int i = 0; i < r; ++i) {
			cin >> p >> c;

			vector<int> temp_p;
			vector<int> temp_c;

			copy_n(cards.begin(), p - 1, std::back_inserter(temp_p));
			copy_n(cards.begin() + p - 1, c, std::back_inserter(temp_c));

			copy(temp_c.begin(), temp_c.end(), cards.begin());
			copy(temp_p.begin(), temp_p.end(), cards.begin() + c);
		}

		std::cout << cards.at(0) << std::endl;
	}

	return 0;
}