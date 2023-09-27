#include<iostream>

using namespace std;
int bubbleSort(int, int[]);

int main(void){
	static int A[100];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> A[i];
	}

	int ans = bubbleSort(n, A);
	for (int i = 0; i < n; i++){
		cout << A[i];
		if (i != n - 1){
			cout << " ";
		}
		else{
			cout << endl;
		}
	}

	cout << ans << endl;
	return 0;
}

int bubbleSort(int N, int A[]){
	bool flag = true;
	int num = 0;
	while (flag){
		flag = false;
		for (int i = N - 1; i > 0; i--){
			if (A[i] < A[i - 1]){
				int temp = A[i];
				A[i] = A[i - 1];
				A[i - 1] = temp;
				flag = true;
				num++;
			}
		}
	}

	return num;
}