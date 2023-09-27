#include <iostream>
#include <list>
using namespace std;

int main () {
	int n, k, w, p, tr, c, m, pmax = 0, pmin = 0;
	list<int> wlist;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> w;
		wlist.push_front(w);
		if ( pmin < w)
			pmin = w;
		pmax += w;
	}
	(pmin < pmax / k) && (pmin = pmax / k);
	list<int>::iterator itwlist = wlist.begin();
	while (pmin <= pmax) {
		m = (pmin + pmax) / 2;
		tr = 0;
		c = 0;
		p = m;
		itwlist = wlist.begin();
		while (c < n) {
			while (p >= 0) {
				p = p - *itwlist;
				c++;
				itwlist++;
			}
			tr++;
			if (tr > k) {
				pmin = m + 1;
				break;
			}
			itwlist--;
			c--;
			p = m;
		}
		if (tr <= k)
			pmax = m - 1;
	}
	cout << pmin << endl;	
	return 0;
}