#include <stack>
#include <utility>
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
	int m;
	string str;
	string s1, s2, s3, s4;
	cin >> m;
	for (int z = 0; z < m; z++) {
		cin >> str;
		set<string> s;
		for (int i = 0; i < str.size(); i++) {
			s1 = str.substr(0, i + 1);
			s2 = str.substr(i + 1, str.size()-i-1);
			s3 = s1;
			s4 = s2;
			reverse(s1.begin(),s1.end());
			 reverse(s2.begin(), s2.end());
			s.insert(s1 + s2);
			s.insert(s1 + s4);
			s.insert(s3 + s2);
			s.insert(s3 + s4);
			s.insert(s2 + s1);
			s.insert(s2 + s3);
			s.insert(s4 + s1);
			s.insert(s4 + s3);
		}
		cout << s.size() << endl;
	}
    return 0;
}