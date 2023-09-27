#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main () {
	int n, x;
	string cmd;
	list<int> alist;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "insert") {
			cin >> x;
			alist.push_front(x);
		}
		else if (cmd == "delete") {
			cin >> x;
			list<int>::iterator ait = alist.begin();
			while(ait != alist.end()) {
				if(*ait == x) {
					alist.erase(ait);
					break;
				}
				else
					ait++;
			}
		}
		else if (cmd == "deleteFirst")
			alist.pop_front();
		else
			alist.pop_back();
		}
	n = alist.size();
	list<int>::iterator ait = alist.begin();
	for (int i = 0; i < n - 1; i++)
		cout << *ait++ << ' ';
	cout << *ait << endl;
	return 0;
}