#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

typedef struct CONVTABLE {
	char bfr;
	char afr;
}CnvTbl;

int main(void) {
	int n;
	vector<string> out;

	while (cin >> n) {
		if (n == 0) {
			break;
		}

		vector<CnvTbl> vc;
		for (int i = 0; i < n; i++) {
			char ch_a, ch_b;
			CnvTbl wk;

			cin >> ch_a >> ch_b;

			wk.bfr = ch_a;
			wk.afr = ch_b;

			vc.push_back(wk);
		}

		int m;
		cin >> m;

		stringstream ss;
		for (int j = 0; j < m; j++) {
			char cnvch;

			cin >> cnvch;

			for (int x = 0; x < vc.size(); x++) {
				if (cnvch == vc[x].bfr) {
					cnvch = vc[x].afr;
					break;
				}
			}
			ss << cnvch;
		}
		out.push_back(ss.str());
	}

	for (int y = 0; y < out.size(); y++) {
		cout << out[y] << endl;
	}

	return 0;
}