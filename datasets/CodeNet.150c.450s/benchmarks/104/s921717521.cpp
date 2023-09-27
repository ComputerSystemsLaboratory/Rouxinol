#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	int x = *a;
	*a = *b;
	*b = x;
}
int main() {
	int w, n, a, b, amida[31];
	char c;
	cin >> w;
	for (int i = 1;i <= w;i++) { amida[i] = i; }
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a >>c>> b;
		swap(&amida[a], &amida[b]);
	}
	for (int i = 1;i <= w;i++)
		cout << amida[i] << endl;
}