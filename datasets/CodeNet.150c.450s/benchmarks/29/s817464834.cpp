#include <iostream>
#include <cstdlib>
#include <list>
using namespace std;

int main() {
	list<int>L; int n, x; char s[15];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s[0] == 'i')cin >> x,  L.push_front(x);
		else if (s[6] == 'F')L.pop_front();
		else if (s[6] == 'L')L.pop_back();
		else {
			cin >> x;
			for (list<int>::iterator it = L.begin(); it != L.end(); it++)
				if (*it == x) {
					L.erase(it); break;
				}
		}
		
	}
	n = 0;
	for (list<int>::iterator it = L.begin(); it != L.end(); it++) {
		if (n++)cout << " ";
		cout << *it;
	}
	cout << endl;
}