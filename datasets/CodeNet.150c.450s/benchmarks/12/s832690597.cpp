#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define PI acos(-1)
#define Mod (int)1000000007
#define INFTY (int)INT_MAX
#define Rep(i, n) for (int i = 0; i < (int)(n); i++)
#define BitRep(i, n) for (int i = 0; i < (int)(1 << n); i++)
#define All(vec) vec.begin(), vec.end()
#define Part(vec, b, e) vec.begin() + b, vec.begin() + e
#define Sum(vec) accumulate(vec.begin(), vec.end(), 0)
#define Sort(vec) sort(vec.begin(), vec.end())
#define Reverse(vec) reverse(vec.begin(), vec.end())
#define Count(vec, x) count(vec.begin(), vec.end(), x)
#define Next_permutation(vec) next_permutation(vec.begin(), vec.end())
#define Find(S, s) S.find(s) != string::npos

int parent(int v) {
	return v / 2;
}

int left(int v) {
	return v * 2;
}

int right(int v) {
	return v * 2 + 1;
}

void print_heap(vector<int> heap, int H) {
	for (int i = 1; i <= H; i++) {
		cout << "node " << i << ": key = " << heap[i] << ", ";
		if (parent(i) >= 1) cout << "parent key = " << heap[parent(i)] << ", ";
		if (left(i) <= H) cout << "left key = " << heap[left(i)] << ", ";
		if (right(i) <= H) cout << "right key = " << heap[right(i)] << ", ";
		cout << endl;
	}
}

int main() {
	int H;
	cin >> H;
	vector<int> heap(H + 1);
	for (int i = 1; i <= H; i++) cin >> heap[i];
	print_heap(heap, H);
	return 0;
}
