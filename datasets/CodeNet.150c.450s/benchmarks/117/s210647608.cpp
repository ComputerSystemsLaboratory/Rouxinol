
#include<limits.h>
#include<iostream>
const int STN = INT_MAX;
const int MAX = 520000;
using namespace std;
int L[MAX/2+2], R[MAX/2+2];

int cnt;
void merge(int *A, int left, int mid, int right)
{
	int n1 = mid-left, n2 = right-mid;
	for(int i = 0 ;  i< n1;i++) L[i] = A[left+i];
	for(int i = 0 ; i < n2;i++) R[i] = A[mid+i];
	L[n1] = R[n2] = STN;
	int i = 0 , j = 0;
	for(int k =left; k <right; k++)
	{
		cnt++;
		if(L[i]<=R[j])
			A[k] = L[i++];
		else
			A[k] = R[j++];
	} 	
}
void mergeSort(int *A, int left, int right)
{
	if(left+1<right)
	{	
		int mid = (left + right)/2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A,left, mid, right);
	}
}
int main()
{
	int A[MAX];
	cnt =  0;
	int n;
	cin >> n;
	for(int i=0 ; i <n; i++) cin >> A[i];
	
	mergeSort(A, 0, n);
	
	for(int i = 0  ; i <  n ; i++)
		{
	
		if(i) 
			cout << " ";
		 cout <<A[i];
		 }
 	cout <<endl;
 	cout << cnt <<endl;
}