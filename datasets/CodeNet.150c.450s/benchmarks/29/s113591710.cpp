#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
	list<int> l;
	string i;

	while (cin >> i) {
		if (i == "insert") {
			int k;
			cin >> k;

			l.push_front(k);
		} else if (i == "delete") {
			int k;
			cin >> k;

			for (auto i = l.begin(); i != l.end(); i++) {
				if (*i == k) {
					l.erase(i);
					break;
				}
			}
		} else if (i == "deleteFirst") {
			l.pop_front();
		} else if (i == "deleteLast") {
			l.pop_back();
		}
	}

	for (auto i = l.begin(); i != --l.end(); i++) {
		cout << *i << ' ';
	}
	cout << *(--l.end()) << endl;
}