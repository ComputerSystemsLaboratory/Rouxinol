#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s, p;
	int count = 0;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);

	while (cin >> p) {
		transform(p.begin(), p.end(), p.begin(), ::tolower);
		if (p == "END_OF_TEXT") {
			break;
		}
		if (s == p) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}