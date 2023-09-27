#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string s, t;
	unordered_set<string> d;

	while (n--) {
		cin >> s >> t;
		switch(s[0]) {
		case 'i':
			d.insert(t); break;
		case 'f':
			cout << (d.find(t) != d.end() ? "yes" : "no") << endl;
		}
	}
}
