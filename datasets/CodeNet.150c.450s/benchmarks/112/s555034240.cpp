#include<iostream>
#include<vector>
#include<string>
using namespace std;
class change {
public:
	char after, before;
};
int main() {
	int n, m;
	while (cin >> n&&n) {
		vector<change>C(n);
		for (int i = 0; i < n; i++) {
			cin >> C[i].before >> C[i].after;

		}
		cin >> m;
		string s;
		for (int i = 0; i < m; i++) {
			char x;
			bool f = false;
			cin >> x;
			for (int j = 0; j < n; j++) {
				if (x == C[j].before) {
					s += C[j].after;
					f = true;
					break;
				}
			}
			if (!f)s += x;

		}
		cout << s << endl;
	}
	return 0;
}