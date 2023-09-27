#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
vi A;
int H;
void maxHeapify(int i) {
	int x,largest;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < H&&A[l] > A[i]) {
		largest = l;
	}
	else {
	    largest = i;
	}
	if (r < H&&A[r] > A[largest]) {
		largest = r;
	}
	if (largest != i) {
		x = A[i];
		A[i] = A[largest];
		A[largest] = x;
		maxHeapify(largest);
	}
}

void buildMaxHeap(int H) {
	for (int i = H / 2; i >= 0; i--) {
		maxHeapify(i);
	}
}

int main() {
	int y;
	cin >> H;
	for (int i = 0; i < H;i++){
		cin >> y;
		A.push_back(y);
	}
	buildMaxHeap(H);
	for (int i = 0; i < H; i++) {
		cout << " " << A[i];
		if (i == H - 1) {
			cout << endl;
		}
	}
}