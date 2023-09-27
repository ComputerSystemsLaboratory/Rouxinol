#include <iostream>
#include <vector>
using namespace std;

int main()
{
	auto& in = cin;

	const int numA = 26;
	int D;
	in >> D;
	vector<int> cs;
	vector<vector<int>> ss;
	for (int i = 0; i < numA; ++i) {
		int c;
		in >> c;
		cs.push_back(c);
	}
	for (int i = 0; i < D; ++i) {
		vector<int> s;
		for (int j = 0; j < numA; ++j) {
			int is;
			in >> is;
			s.push_back(is);
		}
		ss.emplace_back(move(s));
	}

	int sat = 0;
	vector<int> ds(numA);
	for (int i = 0; i < D; ++i) {
		int t;
		in >> t;
		sat += ss[i][t - 1];
		for (int j = 0; j < numA; ++j)
			++ds[j];
		ds[t - 1] = 0;
		for (int j = 0; j < numA; ++j)
			sat -= cs[j] * ds[j];
		cout << sat << "\n";
	}

	return 0;
}
