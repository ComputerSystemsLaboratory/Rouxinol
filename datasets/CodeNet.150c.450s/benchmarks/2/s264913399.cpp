#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int partition(int A[],int p, int r) {
	int x = A[r];
	int i = p - 1;
	for (int j = p;j < r;j++) {
		if (x >= A[j]) {
			i = i + 1;
			swap(A[i], A[j]);
		}
	}
		swap(A[i + 1], A[r]);
		return i + 1;
}

int main() {
		int n;
		cin >> n;
		int A[100000];
		for (int i = 0;i < n;i++) {
			cin >> A[i];
		}
		int ad=partition(A, 0, n - 1);
		for (int i = 0;i < n;i++) {
			if (i == ad) {
				cout << "[" << A[i] << "] ";
			}
			else if (i == n - 1) {
				cout << A[i] << endl;
			}
			else cout << A[i] << " ";
		}

}