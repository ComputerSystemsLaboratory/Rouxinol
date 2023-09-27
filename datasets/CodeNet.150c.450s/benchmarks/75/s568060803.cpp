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

void maxHeap(int i){
	int ma = A[i];
	int l = 2 * i;     if (l <= n) ma = std::max(ma, A[l]);
	int r = 2 * i + 1; if (r <= n) ma = std::max(ma, A[r]);

	if (ma != A[i]){
		int idx = (ma == A[l]) ? l : r;
		swap(A[i], A[idx]);
		maxHeap(idx);
	}
}

int main(){
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> A[i];

	for (int i = n / 2; i >= 1; --i) maxHeap(i);

	for (int i = 1; i <= n; ++i) cout << " " << A[i];
	cout << endl;

	return 0;
}

//node 1: key = 7, left key = 8, right key = 1,
//node 2 : key = 8, parent key = 7, left key = 2, right key = 3,
//node 3 : key = 1, parent key = 7,
//node 4 : key = 2, parent key = 8,
//node 5 : key = 3, parent key = 8,