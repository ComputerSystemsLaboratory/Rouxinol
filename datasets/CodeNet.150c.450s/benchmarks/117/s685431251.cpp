// 2017/05/01 Tazoe

#include <iostream>
#include <algorithm>
using namespace std;

const int INFTY = 1000000001;

int C;		// ???????????°

void Merge(int A[], int left, int mid, int right)
{
	int n1 = mid-left;
	int n2 = right-mid;

	int* L = new int[n1+1];		// ???????????????????¢????
	int* R = new int[n2+1];

	for(int i=0; i<n1; i++){
		L[i] = A[left+i];
	}
	for(int i=0; i<n2; i++){
		R[i] = A[mid+i];
	}
	L[n1] = INFTY;
	R[n2] = INFTY;

	for(int i=0, j=0, k=left; k<right; k++){
		if(C++, L[i]<=R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
		}
	}

	delete[] L;			// ???????????????????§£???
	delete[] R;
}

void mergeSort(int A[], int left, int right)
{
	if(left+1>=right)		// ?????°??????????????¶
		return;

	int mid = (left+right)/2;
	mergeSort(A, left, mid);
	mergeSort(A, mid, right);
	Merge(A, left, mid, right);
}

int main()
{
	int n;
	cin >> n;

	int S[500000];
	for(int i=0; i<n; i++){
		cin >> S[i];
	}

	C = 0;
	mergeSort(S, 0, n);

	for(int i=0; i<n; i++){
		cout << S[i];

		if(i<n-1){
			cout << ' ';
		}
		else{
			cout << endl;
		}
	}
	cout << C << endl;

	return 0;
}