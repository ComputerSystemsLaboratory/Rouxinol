#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Sq
{
	unsigned long xmax;
	unsigned long li;
};

int main()
{
	string st;
	long a = 0, hmax = 0;
	vector<long> h = { 0 };
	vector<Sq> S = { Sq{0, 0} };

	cin >> st;

	for (unsigned long i = 0; i < st.size(); i++) {

		switch (st[i]) {
			case '/':
				if (h[i] == hmax)
					hmax++;
				else {
					for (unsigned long j = 0; j < h.size(); j++) {
						if (h[h.size() - j - 1] == h[i] + 1) {
							if (S.back().xmax !=0 && (S.back().xmax < h.size() - j))
								S.push_back(Sq{ h.size() - 1 , j});
							else if (S.size() > 1 && (S[S.size() - 2].xmax > h.size() - j)) {
								S.back().li += j;
								while (S.size() > 1 && (S[S.size() - 2].xmax > h.size() - j)) {
									S[S.size() - 2].li += S.back().li;
									S.pop_back();
								}
							}
							else{
								S.back().li += j;
								S.back().xmax = h.size() - 1;
							}
							break;
						}
					}
				}
				h.push_back(h[i] + 1);
				break;
			case '\\':
				h.push_back(h[i] - 1);
				break;
			case '_':
				h.push_back(h[i]);
				break;
		}
	}

	for (unsigned long i = 0; i < S.size(); i++)
		a += S[i].li;

	cout << a << endl;

	if (a > 0) {
		cout << S.size();
		for (unsigned long i = 0; i < S.size(); i++)
			cout << " " << S[i].li;
	}
	else
		cout << "0";

	cout << endl;

	return 0;
}