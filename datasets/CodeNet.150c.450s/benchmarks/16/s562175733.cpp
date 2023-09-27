#include <iostream>
#include <vector>

using namespace std;

int A;
vector<int> L;

int searchPuddle(int start, string s) {
	double a = 0, h = 0;
	for (int i = start; i < s.size(); i++) {
		switch (s[i]) {
			case '\\':
				a += h + 0.5;
				h++;
				break;
			case '/':
				h--;
				a += h + 0.5;
				if (h == 0) {
					A += a;
					L.push_back((int)a);
					return i;
				}
				break;
			case '_':
				a += h;
				break;
			default:
				break;
		}
	}
	return start;
}

int main() {
	double a = 0, h = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '\\')
			i = searchPuddle(i, s);
	}
	cout << A << endl;
	cout << L.size();
	vector<int>::iterator it = L.begin();
	while (it != L.end()) {
		cout << " " << *it;
		it++;
	}
	cout << endl;
	return 0;
}