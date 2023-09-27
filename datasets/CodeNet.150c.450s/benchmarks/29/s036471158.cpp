#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x;
	string com;
	list<int> lis;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> com;
		if (com == "insert") {
			cin >> x;
			lis.push_front(x);
		}
		else if (com == "delete") {
			cin >> x;
			for (auto ite = lis.begin(); ite != lis.end(); ite++) {
				if (*ite == x) {
					lis.erase(ite);
					break;
				}
			}
		}
		else if (com == "deleteFirst") {
			lis.pop_front();
		}
		else if (com == "deleteLast") {
			lis.pop_back();
		}
	}
	for (auto ite = lis.begin(); ite != lis.end(); ite++) {
		if (ite == lis.begin())
			cout << *ite;
		else
			cout << ' ' << *ite;
	}
		cout << endl;
	return 0;
}