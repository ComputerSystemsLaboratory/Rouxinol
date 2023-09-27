#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int,int> P;

bool comp(const P& a, const P& b) {
	if (a.first != b.first) return (a.first > b.first);
	return (a.second < b.second);
}

int main() {
	vector<P> seq;
	int n;
	while (cin >> n) {
		bool inserted = false;
		for (int i = 0; i < seq.size(); i++) {
			if (seq[i].second == n) {
				seq[i].first++;
				inserted = true;
			}
		}
		if (!inserted)
			seq.push_back(P(1, n));
	}

	sort(seq.begin(), seq.end(), comp);

	int m = seq[0].first;
	for (int i = 0; seq[i].first == m; i++)
		cout << seq[i].second << endl;
	
	return 0;
}