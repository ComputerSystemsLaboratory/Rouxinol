#include "iostream"

using namespace std;

int c;

void marge(int s[500000], int head, int mid, int tail) {

	int x[500000];
	int m = mid;

	for (int i = head; i < tail; i++) {
		x[i] = s[i];
	}

	for (int i = head; i < tail; i++ ) {
		if (mid == tail) {
			s[i] = x[head];
			head++;
		}
		else if (head == m) {
			s[i] = x[mid];
			mid++;
		}
		else if (x[head] <= x[mid]) {
			s[i] = x[head];
			head++;
		}
		else {
			s[i] = x[mid];
			mid++;
		}
		c++;
	}

}

//head 0???????????????
//tail ?????????????´???????????¬?????????????n = 10?????????tail = 10

void msort(int s[500000], int head, int tail) {

	if ( tail - head <= 1) return;

	int mid = head + (tail - head)/2;

	msort(s, head, mid);
	msort(s, mid, tail);

	marge( s, head, mid, tail );
}

int main() {

	int s[500000];
	int n;

	cin >> n;
	for (int i = 0; i < n; i++ ) {
		cin >> s[i];
	}

	msort( s, 0, n );

	for (int i = 0; i < n; i++) {
		cout << s[i];
		if (i < n - 1) {
			cout << " ";
		}
	}

	cout << endl << c << endl;

	return 0;
}