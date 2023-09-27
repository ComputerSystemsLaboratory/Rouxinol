#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

int main() {
	int n;
	unordered_set<string> d;
	string ope, contents;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ope >> contents;
		if (ope == "insert") d.insert(contents);
		else if (ope == "find") {
			if (d.count(contents) >= 1) cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}

	return 0;
}