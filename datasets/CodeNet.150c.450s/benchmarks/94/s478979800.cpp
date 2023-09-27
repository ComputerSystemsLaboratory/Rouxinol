#include <iostream>

using namespace std;

void trace(int A[], int n) {

	for(int i = 0; i < n; i++) {
        if(i) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

int bubbleSort(int A[], int n) {

	bool flag = 1;
	int i = 0;
	int sw = 0;

	while(flag) {

		flag = 0;

		for(int j = n - 1; j >= i + 1; j--) {

			if(A[j] < A[j-1]) {
				int temp = A[j];
				A[j] = A[j-1];
				A[j-1] = temp;

				flag = 1;
				sw++;
			}
		}
		i++;
	}
	return sw;
}

int main(void) {

	int A[100], n, sw;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sw = bubbleSort(A, n);

    trace(A, n);
    cout << sw << endl;

    return 0;
}