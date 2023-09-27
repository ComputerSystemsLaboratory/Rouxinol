#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	list<int> lst;
	string s;
	int n, num;
	list<int>::iterator it, en = lst.end();

	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "insert") {
			cin >> num;
			lst.push_front(num);
		}
		else if (s == "delete") {
			cin >> num;
			for (it = lst.begin(); it != en; it++) {
				if (*it == num) {
					lst.erase(it);
					break;
				}
			}
		}
		else if (s == "deleteFirst") {
			lst.pop_front();
		}
		else {
			lst.pop_back();
		}
	}

	en--;
	for (it = lst.begin(); it != en; it++) {
		cout << *it << " ";
	}
	cout << *en << endl;

	return 0;
}