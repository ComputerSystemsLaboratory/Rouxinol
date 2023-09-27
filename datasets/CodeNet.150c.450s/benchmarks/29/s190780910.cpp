#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n,x;
	string s;

	list<int> ls;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "insert") {
			cin >> x;
			ls.push_front(x);
		}
		else if (s == "delete") {
			cin >> x;
			for (list<int>::iterator itr = ls.begin(); itr != ls.end(); itr++) {
				if (*itr == x) {
					ls.erase(itr);
					break;
				}
			}
		}
		else if (s == "deleteFirst") {
			ls.pop_front();
		}
		else if (s == "deleteLast") {
			ls.pop_back();
		}
	}

	int i = 0;
	for (list<int>::iterator itr = ls.begin(); itr != ls.end(); itr++) {
		if (i) cout << " ";
		i++;
		cout << *itr;
	}
	cout << endl;

	return 0;
}