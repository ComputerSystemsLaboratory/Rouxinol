#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {

	int n;
	scanf("%d",&n);

	list<int> L;

	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;

		if (s == "insert") {
			int v;
			scanf("%d",&v);
			L.push_front(v);
		} else if (s == "delete") {
			int v;
			scanf("%d",&v);
			for (auto itr = L.begin(); itr != L.end(); ++itr) {
				if (*itr == v) {
					L.erase(itr);
					break;
				}
			}
		} else if (s == "deleteFirst") {
			L.pop_front();
		} else {
			L.pop_back();
		}
	}

	for (auto itr = L.begin(); itr != L.end(); ++itr) {
		if (itr != L.begin()) {
			cout << " " << *itr;
		} else {
			cout << *itr;
		}
	}
	cout << endl;

	return 0;
}