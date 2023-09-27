#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define ALL(c) (c).begin(),(c).end()

int main() {
	int M; cin >> M;
	while(M--) {
		string s;
		cin >> s;
		vector<string> v;
		for(int i = 0; i < (int)s.length() - 1; i++) {
			string front = s.substr(0, i + 1);
			string back = s.substr(i + 1);

			v.push_back(front + back);
			v.push_back(back + front);

			reverse(ALL(front));
			v.push_back(front + back);
			v.push_back(back + front);

			reverse(ALL(front));
			reverse(ALL(back));
			v.push_back(front + back);
			v.push_back(back + front);

			reverse(ALL(front));
			v.push_back(front + back);
			v.push_back(back + front);
		}
		sort(ALL(v));
		v.erase(unique(ALL(v)), v.end());

#if 0
		cerr << "-----" << endl;
		for(vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
			cerr << *iter << endl;
		cerr << "-----" << endl;
#endif

		cout << v.size() << endl;
	}
}