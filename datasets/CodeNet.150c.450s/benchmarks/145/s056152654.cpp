#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{	
	string s, t;
	map<string, int> p;

	while (cin >> s) {
		if (p.find(s) != p.end())
			p[s]++;
		else
			p[s] = 1;

		if (s.size() > t.size())
			t = s;
	}

	int m = 0;

	for (map<string, int>::iterator itr = p.begin(); itr != p.end(); itr++)
		m = max(m, itr->second);

	for (map<string, int>::iterator itr = p.begin(); itr != p.end(); itr++)
		if (itr->second == m)
			cout << itr->first << " " << t << endl;

	return 0;
}

