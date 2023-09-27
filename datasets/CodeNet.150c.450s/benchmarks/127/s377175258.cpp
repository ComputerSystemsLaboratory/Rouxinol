#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	int m;

	scanf("%d", &m);

	for(int test_case = 0; test_case < m; ++test_case) {

		char buf[128];
		string s;
		vector<string> dict;

		scanf("%s", buf);
		s = buf;

		for(int i = 1; i < s.size(); ++i) {

			string l1 = s.substr(0, i);
			string r1 = s.substr(i, s.size());
			string l2 = l1;
			string r2 = r1;

			reverse(l2.begin(), l2.end());
			reverse(r2.begin(), r2.end());

			dict.push_back(l1 + r1);
			dict.push_back(l1 + r2);
			dict.push_back(l2 + r1);
			dict.push_back(l2 + r2);
			dict.push_back(r1 + l1);
			dict.push_back(r1 + l2);
			dict.push_back(r2 + l1);
			dict.push_back(r2 + l2);
		}

		sort(dict.begin(), dict.end());
		dict.erase(unique(dict.begin(), dict.end()), dict.end());

		int ans = dict.size();

		printf("%d\n", ans);
	}

	return 0;
}