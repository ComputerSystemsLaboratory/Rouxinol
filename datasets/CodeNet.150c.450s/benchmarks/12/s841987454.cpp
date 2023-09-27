#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	long H;	
	cin >> H;
	vector<long> a(H+1);
	// 1-origin
	for (long i=1; i<a.size(); ++i) scanf("%ld", &a[i]);

	// node id: key = k, parent key = pk, left key = lk, right key = rk, 	
	for (long i=1; i<a.size(); ++i) {
		long id = i;
		long key = a[i];
		cout << "node " << id << ": key = " << key << ", ";

		long p_key = a[i/2]; 
		if (i != 1) cout << "parent key = " << p_key << ", ";
		long lc_key = a[2*i];
		if (2*i <= H) cout << "left key = " << lc_key << ", ";
		long rc_key = a[2*i+1];
		if (2*i + 1 <= H) cout << "right key = " << rc_key << ", ";
		cout << endl;
	}
	return 0;
}


