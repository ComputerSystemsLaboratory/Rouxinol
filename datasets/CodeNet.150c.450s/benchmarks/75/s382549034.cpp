#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <list>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

const int INF = 1 << 30;
const int MOD = 1000000007;
const int MAX = 500000;
const int N = 100;

int A[MAX+1];
int H;

void maxHeapify(int A[], int i) {
	int l = 2*i;
	int r = 2*i+1;
	int largest = i;
	if (l <= H && A[l] > A[largest]) largest = l;
	if (r <= H && A[r] > A[largest]) largest = r;
	if (largest != i) {
		swap(A[i], A[largest]);
		maxHeapify(A, largest);
	}
}

int main() {
	cin >> H;
	rep(i, H) cin >> A[i+1];
	for (int i=H/2; i>=1; i--) maxHeapify(A, i);
	rep(i, H) cout << ' ' << A[i+1];
	cout << endl;
}

