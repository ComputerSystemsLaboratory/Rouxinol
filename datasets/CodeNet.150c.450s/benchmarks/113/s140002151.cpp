#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	int x = 0;
	int k = 1;
	list<int> lst;

	while (1) {
		cin >> x;
		if (x == 0) {
			break;
		}
		lst.push_back(x);
	}

	list<int>::iterator it = lst.begin();
	while (it != lst.end()) {
		cout << "Case "<< k << ": " << *it << endl;
		k++;
		++it;
	}
}