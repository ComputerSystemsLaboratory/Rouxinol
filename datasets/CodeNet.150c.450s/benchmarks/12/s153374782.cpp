#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

#define NIL -1
#define N 500001

int A[N], n;

int par(int i){ return i / 2; }
int lef(int i){ return i * 2; }
int rig(int i){ return i * 2 + 1; }

int main(){
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) cin >> A[i];

	for (int i = 1; i <= n; ++i) {
		cout << "node " << i << ": " << "key = " << A[i] << ", ";
		int p = par(i);
		int l = lef(i);
		int r = rig(i);
		if (p >= 1) cout << "parent key = " << A[p] << ", ";
		if (l <= n) cout << "left key = " << A[l] << ", ";
		if (r <= n) cout << "right key = " << A[r] << ", ";
		cout << endl;
	}
}

//node 1: key = 7, left key = 8, right key = 1,
//node 2 : key = 8, parent key = 7, left key = 2, right key = 3,
//node 3 : key = 1, parent key = 7,
//node 4 : key = 2, parent key = 8,
//node 5 : key = 3, parent key = 8,