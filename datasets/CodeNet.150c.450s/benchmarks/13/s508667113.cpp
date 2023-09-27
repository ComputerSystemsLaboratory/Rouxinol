#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s, p;
	cin >> s >> p;

	bool match;
	for(size_t i=0; i<s.size(); ++i) {
		int i0 = i;
		match = true;
		for(auto c : p) match &= c==s[i0++ % s.size()];
		if(match) break;
	}

	cout << (match ? "Yes\n" : "No\n");

	return 0;
}

