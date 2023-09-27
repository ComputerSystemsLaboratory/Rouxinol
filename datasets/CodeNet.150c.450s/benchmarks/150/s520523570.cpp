#include <iostream>
using namespace std;
int n;
int A[2000005];
int B[2000005];
int C[10005];
int m = 10000;
void print(int arr[],int l) {
	cout << arr[0];
	for (int i = 1; i < l; i++) {
		cout << " ";
		cout << arr[i];
	}
	cout << endl;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	//step1 统计个数
	for (int i = 0; i < n; i++) {
		C[A[i]]++;
	}

	//step2 求和
	for (int i = 1; i <= m; i++) {
		C[i] += C[i - 1];
	}

	//step3 对应
	for (int i = n-1; i >= 0; i--) {
		int pos = C[A[i]];
		B[pos-1] = A[i];
		C[A[i]]--;
	}

	//step4 输出
	cout << B[0];
	for (int i = 1; i < n; i++) {
		cout << " ";
		cout << B[i];
	}
	cout << endl;
}
