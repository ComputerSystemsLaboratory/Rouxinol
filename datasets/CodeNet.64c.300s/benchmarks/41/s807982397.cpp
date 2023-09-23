#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>

#include <cstdio>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, s, n) for (int i = (s); i <= (n); i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define rrep1(i, s, n) for (int i = (s); i >= (n); i--)
#define print_array(ary, size) cout << ary[0]; rep1(i, 1, size - 1) cout << ' ' << ary[i]; cout << endl;
typedef long long ll;
typedef unsigned long long ull;

int H;
int A[500001];

void maxHeapify(int i)
{
	int left = i * 2;
	int right = i * 2 + 1;
	int largest = i;
	int tmp;

	if (left <= H && A[largest] < A[left]) largest = left;
	if (right <= H && A[largest] < A[right]) largest = right;

	if (largest != i) {
		tmp = A[i];
		A[i] = A[largest];
		A[largest] = tmp;
		maxHeapify(largest);
	}
}

void buildMaxHeap()
{
	rrep1(i, H / 2, 1) maxHeapify(i);
}

int main()
{
	cin >> H;
	rep1(i, 1, H) cin >> A[i];
	buildMaxHeap();
	rep1(i, 1, H) cout << ' ' << A[i];
	cout << endl;

	return 0;
}
