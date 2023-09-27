#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std; 
int main() {
	int m;
	int nmin;
	int nmax;
	while (cin >> m >> nmin >> nmax, m != 0) {
		vector <int> vec(m);
		for (int i = 0; i < m; i++) {
			cin >> vec.at(i);
		}
		int cnt = 0;
		for (int j = nmin-1; j <= nmax-1; j++) {
			cnt = max(cnt, vec.at(j) - vec.at(j+1));
		}
		for (int k = nmax-1; k >= nmin-1; k--) {
			if (cnt == vec.at(k) - vec.at(k+1)) {
				cout << k + 1 << endl;
				break;
			}
			else {
				continue;
			}
		}
	}
}
