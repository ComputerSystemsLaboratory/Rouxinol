#include<iostream>
using namespace std;

class Merge {
public:
	Merge() : count(0){}

	void mergeSort(int A[], int left, int right) {
		if (left + 1 >= right) {
			return;
		}
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}

	int getCount() {
		return count;
	}

private:
	void merge(int A[], int left, int mid, int right) {
		int numL = mid - left;
		int numR = right - mid;

		//?????§A??????????????´??°???????????§??\?????????????????????????????????
		int L[250002];
		int R[250002];
		for (int i = 0; i < numL; i++) {
			L[i] = A[left + i];
		}
		for (int i = 0; i < numR; i++) {
			R[i] = A[mid + i];
		}
		//??????????????¨????????\???????????????
		L[numL] = 2000000000; 
		R[numR] = 2000000000;
		int iL = 0;
		int iR = 0;
		for (int j = left; j < right; j++) {
			if (L[iL] <= R[iR]) {
				A[j] = L[iL];
				iL++;
			}
			else {
				A[j] = R[iR];
				iR++;
			}
			count++;
		}
	}

	int count;
};

int main() {
	int A[500000];
	int numA;
	Merge mer;
	cin >> numA;
	for (int i = 0; i < numA; i++) {
		cin >> A[i];
	}

	mer.mergeSort(A, 0, numA);

	for (int i = 0; i < numA; i++) {
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << mer.getCount() << endl;
	return 0;
}