#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, s, n) for (int i = (s); i <= (n); i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define print_array(ary, size) cout << ary[0]; rep1(i, 1, size - 1) cout << ' ' << ary[i]; cout << endl;
typedef long long ll;
typedef unsigned long long ull;

typedef struct {
	char c;
	int v;
} Card;


Card A[100000];
Card B[100000];

int partition(Card* A, int p, int r)
{
	int x = A[r].v;
	int i = p - 1;
	int tmp;
	char tmpc;

	rep1(j, p, r - 1) {
		if (A[j].v <= x) {
			i++;
			tmp = A[i].v;
			A[i].v = A[j].v;
			A[j].v = tmp;
			tmpc = A[i].c;
			A[i].c = A[j].c;
			A[j].c = tmpc;
		}
	}
	tmp = A[i + 1].v;
	A[i + 1].v = A[r].v;
	A[r].v = tmp;
	tmpc = A[i + 1].c;
	A[i + 1].c = A[r].c;
	A[r].c = tmpc;

	return i + 1;
}

void quicksort(Card* A, int p, int r)
{
	int q;

	if (p < r) {
		q = partition(A, p, r);
		quicksort(A, p, q - 1);
		quicksort(A, q + 1, r);
	}
}

void merge(Card* A, int left, int mid, int right)
{
	int i = 0, j = 0;

	int n1 = mid - left;
	int n2 = right - mid;

	int* L = new int[n1 + 1];
	int* R = new int[n2 + 1];
	char* Lc = new char[n1 + 1];
	char* Rc = new char[n2 + 1];

	rep(i, n1) {
		L[i] = A[left + i].v;
		Lc[i] = A[left + i].c;
	}
	rep(i, n2) {
		R[i] = A[mid + i].v;
		Rc[i] = A[mid + i].c;
	}
	L[n1] = 1000000001;
	R[n2] = 1000000001;

	rep1(k, left, right - 1) {
		if (L[i] <= R[j]) {
			A[k].v = L[i];
			A[k].c = Lc[i];
			i++;
		}
		else {
			A[k].v = R[j];
			A[k].c = Rc[j];
			j++;
		}
	}

	delete[] L, R, Lc, Rc;
}

void mergeSort(Card* A, int left, int right)
{
	int mid;

	if (left + 1 < right) {
		mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int main()
{
	int n;
	bool stable = true;

	cin >> n;
	rep(i, n) {
		cin >> A[i].c >> A[i].v;
		B[i].c = A[i].c;
		B[i].v = A[i].v;
	}

	quicksort(A, 0, n - 1);
	mergeSort(B, 0, n);

	rep(i, n) {
		if ((A[i].c != B[i].c) ||
			(A[i].v != B[i].v)) {
			stable = false;
			break;
		}
	}

	if (stable) cout << "Stable" << endl;
	else cout << "Not stable" << endl;

	rep(i, n) cout << A[i].c << ' ' << A[i].v << endl;

	return 0;
}
