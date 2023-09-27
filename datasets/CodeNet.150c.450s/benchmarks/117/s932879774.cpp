// 2014/10/27 Tazoe

#include <iostream>
using namespace std;

int L[250001], R[250001];

int Cnt;

void Merge(int A[500000], int left, int mid, int right)
{
	const int SENTINEL = 1000000001;

	int n1 = mid-left;
	int n2 = right-mid;

	for(int i=0; i<n1; i++){
		L[i] = A[left+i];
	}
	for(int i=0; i<n2; i++){
		R[i] = A[mid+i];
	}
	L[n1] = SENTINEL;
	R[n2] = SENTINEL;

	for(int i=0, j=0, k=left; k<right; k++){
		if(Cnt++, L[i]<=R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
		}
	}
}

void Merge_Sort(int A[500000], int left, int right)
{
	if(left+1>=right)
		return;

	int mid = (left+right)/2;
	Merge_Sort(A, left, mid);
	Merge_Sort(A, mid, right);
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

	Cnt = 0;

	Merge_Sort(S, 0, n);

	for(int i=0; i<n; i++){
		cout << S[i];

		if(i<n-1){
			cout << ' ';
		}
		else{
			cout << endl;
		}
	}

	cout << Cnt << endl;

	return 0;
}