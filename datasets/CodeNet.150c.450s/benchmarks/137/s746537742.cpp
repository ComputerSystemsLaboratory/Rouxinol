#include<cstdio>
#include<iostream>
#include<algorithm>
#include<functional>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<set>

using namespace std;

typedef pair<string, int> P;

int main()
{
	int n;
	cin >> n;

	set<string> s;
	vector<string> ans;
	for (int i = 0; i < n; i++) {
		string s1, s2;
		cin >> s1 >> s2;
		if (s1 == "insert") {
			s.insert(s2);
		}
		else if (s1 == "find") {
			auto itr=s.find(s2);
			if (itr != s.end()) {
				ans.push_back("yes");
			}
			else ans.push_back("no");
		}
	}
	
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}

	return 0;
}