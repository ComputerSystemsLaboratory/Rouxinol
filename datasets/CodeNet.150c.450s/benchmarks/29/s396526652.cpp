#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
	long n = 0, u = 0;
	string st;
	list<int> a;
	list<int>::iterator it;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> st;
		if (st == "insert"){
			cin >> u;
			a.push_front(u);
		}
		else if (st == "delete") {
			cin >> u;
			for (it = a.begin(); it != a.end(); it++) {
				if (*it == u) {
					a.erase(it);
					break;
				}
			}
		}
		else if (st == "deleteFirst")
			a.pop_front();
		else if (st == "deleteLast")
			a.pop_back();
	}

	cout << a.front();
	a.pop_front();

	while (!a.empty()) {
		cout << " " << a.front();
		a.pop_front();
	}

	cout << endl;

	return 0;
}