#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define NT 26
#define ND 365

typedef long long ll;


int main () {
	int D;
	int c[NT];
	int s[ND][NT];
	int last[NT];
	cin >> D;
	for (int typ=0; typ<NT; typ++)
		cin >> c[typ];
	for (int d=0; d<D; d++) {
		for (int typ=0; typ<NT; typ++) {
			cin >> s[d][typ];
			last[typ] = 0;
		}
	}
	int t[ND];
	for (int d=0; d<D; d++) {
		cin >> t[d];
		t[d]--;
	}
	
	ll satisfication = 0;
	for (int d=0; d<D; d++) {
		satisfication += s[d][t[d]];
		last[t[d]] = d+1;
		for (int typ=0; typ<NT; typ++) {
			satisfication -= c[typ] * (d+1 - last[typ]);
		}
		cout << satisfication << endl;
	}
	return 0;
}