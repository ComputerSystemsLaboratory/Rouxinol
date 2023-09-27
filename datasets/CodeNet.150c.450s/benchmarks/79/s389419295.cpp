#include <iostream>
#include <list>

using namespace std;

int main(void) {
	int n,r;
	while (cin >> n >> r, n) {
		list<int> hana;
		for (int i = 0; i < n; ++i) {
			hana.push_back(i+1);
		}
		
		int p,c,count;
		for (int i = 0; i < r; ++i) {
			cin >> p >> c;
			count = 1;
			for (list<int>::iterator itr = hana.begin(); itr != hana.end();) {
				if (count > n-(p-1)-c && count < n-(p-2)) {
					hana.push_back(*itr);
					itr = hana.erase(itr);
				}
				else {
					++itr;
				}
				++count;
			}
		}
		count = 1;
		for (list<int>::iterator itr = hana.begin(); itr != hana.end(); ++itr) {
			if (count == n) {
				cout << *itr << endl;
			}
			++count;
		}
	}

	return 0;
}