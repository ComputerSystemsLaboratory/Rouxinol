#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,string> P;

int comp(const P& a, const P& b) {
	return (a.first > b.first);
}

int main() {
	vector<P> seq;
	string s;
	string maxstr = "";
	int pos;
	
	getline(cin, s);
	
	while (1) {
		pos = s.find(' ');
		string word = s.substr(0, pos);

		bool inserted = false;
		for (int i = 0; i < seq.size(); i++) {
			if (seq[i].second == word) {
				seq[i].first++;
				inserted = true;
			}
		}
		if (!inserted) {
			seq.push_back(P(1, word));
		}

		if (word.size() > maxstr.size()) {
			maxstr = word;
		}

		if (pos == string::npos)
			break;
		s = s.substr(pos+1);
	}

	sort(seq.begin(), seq.end(), comp);

	cout << seq[0].second << " " << maxstr << endl;

	return 0;
}