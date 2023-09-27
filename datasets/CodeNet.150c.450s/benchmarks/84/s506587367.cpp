#include <iostream>
#include <climits>

long long int merge(long long int* A, int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	
	long long int* L = new long long int[n1+1];
	for (int i=0; i<n1; i++) L[i] = A[left+i];
	L[n1] = INT_MAX;
	
	long long int *R = new long long int[n2+1];
	for (int i=0; i<n2; i++) R[i] = A[mid+i];
	R[n2] = INT_MAX;
	
	long long int count = 0;
	int i=0, j=0;
	for (int k=left; k<right; k++) {
		if (L[i] <= R[j]) {
			A[k] = L[i]; i++;
		}
		else {
			A[k] = R[j]; j++; 
			count += (long long int)(n1 - i);
		}
	}
	
	delete[] L;
	delete[] R;
	
	return count;
}

long long int mergeSort(long long int* A, int left, int right)
{
	long long int count = 0;
	
	if (left+1 < right) {
		int mid = (left + right) / 2;
		count += mergeSort(A, left, mid);
		count += mergeSort(A, mid, right);
		count += merge(A, left, mid, right);
	}
	
	return count;
}

int main()
{
	int n;
	std::cin >> n;
	
	long long int *A = new long long int[n];
	for (int i=0; i<n; i++) std::cin >> A[i];
	
	long long int inversion = mergeSort(A, 0, n);
	
	std::cout << inversion << std::endl;
	
	delete[] A;
	
	return 0;
}


