#include <iostream>
#include <list>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int n,r;

	cin >> n;
	cin >> r;

	while (n != 0 || r != 0) {
		std::list<int> lst;
		int now = 1;

		for (int i = 0; i < n; i++) {
			lst.push_back(i+1);
		}

		for (int i = 0; i < r; i++) {
			int index = 1;
			int p,c;
			cin >> p;
			cin >> c;

			for (std::list<int>::iterator itr = lst.begin(); itr != lst.end();) {
				if (index >  n-(p-1)-c && index < n-(p-2)){
					lst.push_back(*itr);
					itr = lst.erase(itr);
				}else{
					itr++;
				}	
				index++;
			}
		}
		for (std::list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
			if (now == n) {
				cout << *itr << endl;
			}
			now++;
		}
		cin >> n;
		cin >> r;
	}	
	return 0;
}