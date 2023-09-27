#include "iostream"

using namespace std;

static const int MAX = 100000;
static const int SENTINEL = 200000000;

struct Card {
	char suit;
	int value;
};

Card L[MAX / 2 + 2], R[MAX / 2 + 2];


void marge( Card s[500000], int head, int mid, int tail) {

	Card x[500000];
	int m = mid;
	
	for (int i = head; i < tail; i++) {
		x[i] = s[i];
	}
	
	for (int i = head; i < tail; i++) {
		if (mid == tail) {
			s[i] = x[head];
			head++;
		}
		else if (head == m) {
			s[i] = x[mid];
			mid++;
		}
		else if (x[head].value <= x[mid].value) {
			s[i] = x[head];
			head++;
		}
		else {
			s[i] = x[mid];
			mid++;
		}
	}

}

//head 0???????????????
//tail ?????????????´???????????¬?????????????n = 10?????????tail = 10

void msort(Card s[500000], int head, int tail) {

	if (tail - head <= 1) return;

	int mid = head + (tail - head) / 2;

	msort(s, head, mid);
	msort(s, mid, tail);

	marge(s, head, mid, tail);
}


int partition( Card A[], int n, int p, int r ) {
	int i, j;
	Card t, x;

	x = A[r];
	i = p - 1;

	for (j = p; j < r; j++) {
		if (A[j].value <= x.value) {
			i++;
			t = A[i]; A[i] = A[j]; A[j] = t;
		}
	}
	t = A[i + 1]; A[i + 1] = A[r]; A[r] = t;

	return i + 1;
}

void quickSort( Card A[], int n, int p, int r ) {
	int q;
	if (p >= r) return;
	q = partition(A, n, p, r);
	/*
	cout << endl;
	for (int i = p; i <= r; i++) {
		cout << A[i].suit << " " << A[i].value << endl;
	}
	cout << endl;
	*/
	quickSort(A, n, p, q - 1);
	quickSort(A, n, q + 1, r);

}


int main() {

	int n, i, v;
	Card A[MAX], B[MAX];

	char S[10];
	bool stable = true;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> S;
		cin >> v;

		A[i].suit = B[i].suit = S[0];
		A[i].value = B[i].value = v;
	}

	msort(A, 0, n);
	quickSort( B, n, 0, n-1 );

	for (int i = 0; i < n; i++) {
		if (A[i].suit != B[i].suit) {
			stable = false;
			break;
		}
	}
	if (stable) cout << "Stable" << endl;
	else cout << "Not stable" << endl;

	for (int i = 0; i < n; i++) {
		cout << B[i].suit << " " << B[i].value << endl;
	}

	return 0;
}