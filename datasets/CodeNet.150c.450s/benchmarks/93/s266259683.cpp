#include <iostream>
#include <vector>
using namespace std;

const int INF = 1 << 30;
const int MAX = 100000;

struct Card {
	char suit;
	int num;
};

void swap(Card &x, Card &y) {
	Card tmp = x;
	x = y;
	y = tmp;
}

int partition(Card A[], int p, int r) {
	Card x = A[r];
	int i = p; // First index greater than A[r]
	for (int j = p; j <= r-1; j++) {
		if (A[j].num > x.num) continue;
		swap(A[i], A[j]); // Insert A[j] (less than A[r])
		i++;
	}
	swap(A[i], A[r]);
	return i;
}

void quickSort(Card A[], int p, int r) {
	if (p >= r) return;
	int q = partition(A, p, r);
	quickSort(A, p, q-1);
	quickSort(A, q+1, r);
}

void merge(Card A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    vector<Card> L(n1+1), R(n2+1);
    for (int i = 0; i < n1; i++) L[i] = A[left+i];
    for (int i = 0; i < n2; i++) R[i] = A[mid+i];
    L[n1].num = INF;
    R[n2].num = INF;
    int i = 0, j = 0;
    for (int k = left; k <= right-1; k++) {
        if (L[i].num <= R[j].num) {
            A[k] = L[i];
            i++;
        }
        else {
			A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(Card A[], int left, int right) {
    if (left + 1 >= right) return;
    int mid = (left + right) / 2;
    int ans = 0;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
}

int main() {
	int n;
	Card A[MAX], B[MAX];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i].suit >> A[i].num;
		B[i] = A[i];
	}

	quickSort(A, 0, n-1);
	mergeSort(B, 0, n);
	bool stable = true;
	for (int i = 0; i < n; i++) {
		if (A[i].suit == B[i].suit) continue;
		stable = false;
		break;
	}
	if (stable) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	for (int i = 0; i < n; i++) cout << A[i].suit << ' ' << A[i].num << endl;
}

