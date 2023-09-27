#include<iostream>
#include<climits>
using namespace std;
long long sum = 0;

void merge(int A[], int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1], R[n2];

	for(int i = 0; i < n1; i++){
		L[i] = A[left + i];
	//	cout << "L: "<< L[i] << ' ';
	}
//	cout << endl;

	for (int i = 0; i < n2; i++){
		R[i] = A[mid + i];
	//	cout << "R: "<< R[i] << ' ';
	}
//	cout << endl;
	L[n1] = R[n2] = INT_MAX;
	
	int i=0, j=0;
	for(int k=left; k<right; k++){
		if(L[i] < R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
			sum += n1 - i;
		}

	}
}
void mergesort(int A[], int left, int right)
{
	if(left + 1 < right){
		int mid = (left + right) / 2;
		mergesort(A,left,mid);
		mergesort(A,mid,right);
		merge(A,left,mid,right);

	}

}
int main()
{
	int n;
	cin >> n;
	int A[n];
	for(int i=0; i<n; i++)
		cin >> A[i];
	mergesort(A,0,n);
	cout << sum << endl;
	
}
