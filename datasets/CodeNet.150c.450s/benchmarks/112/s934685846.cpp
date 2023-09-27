#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	int n, o;
	while (cin >> n, n) {
		map<char, char>m;

		for (int i = 0;i < n;i++) {
			char a, b;
			cin >> a >> b;
			m[a]=b;
		}

		cin >> o;
		string sa;

		for (int i = 0;i < o;i++) {
			char a;
			cin >> a;
			auto itr = m.find(a);
			if (itr != m.end()) {
				sa += itr->second;
			}
			else {
				sa += a;
			}
		}

		cout << sa << endl;

	}
	return 0;
}