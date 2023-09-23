#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main() {
	int n;
	int A[100];
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> A[i];
	}
	bool flag = true;
	int count = 0;
	while (flag) {
		flag = false;
		for (int j = n - 1;j >= 1;j--) {
			if (A[j] < A[j - 1]) {
				int a = A[j];
				A[j] = A[j - 1];
				A[j - 1] = a;
				count++;
				flag = true;
			}
		}
	}
	for (int i = 0;i < n-1;i++) {
		cout << A[i] << " ";
	}
	cout << A[n - 1]<<endl;
	cout << count << endl;
}