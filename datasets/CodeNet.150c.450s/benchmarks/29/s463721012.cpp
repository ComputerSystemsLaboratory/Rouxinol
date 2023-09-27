#include <algorithm>
#include <iostream>
#include <list>
#include <math.h>
#include <stack>
#include <stdio.h>
#include <string>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	list<int> l;
	int n, x;
	cin >> n;

	string cmd;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "insert") {
			cin >> x;
			l.push_front(x);
		}
		else if (cmd == "delete") {
			cin >> x;
			for (list<int>::iterator itr = l.begin(); itr != l.end(); itr++) {
				if (*itr == x) {
					l.erase(itr);
					break;
				}
			}
		}
		else if (cmd == "deleteFirst") {
			l.pop_front();
		}
		else if (cmd == "deleteLast") {
			l.pop_back();
		}
	}

	for (list<int>::iterator itr = l.begin(); itr != l.end(); itr++) {
		if (itr != l.begin()) cout << " ";
		cout << *itr;
	}
	cout << "\n";
}

