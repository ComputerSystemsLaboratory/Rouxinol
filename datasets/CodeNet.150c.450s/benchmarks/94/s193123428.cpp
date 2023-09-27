#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
	int N, A[100], work,cou = 0;
	bool flag = 1;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	while (flag) {
		flag = 0;
		for (int j = N - 1; j >= 1; j--) {
			if (A[j] < A[j - 1]) {
				work = A[j];
				A[j] = A[j - 1];
				A[j - 1] = work;
				flag = 1; cou++;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		cout << A[i];
		if (i != N - 1)  cout << " ";
		else cout << endl;
	}
	cout << cou << endl;
}