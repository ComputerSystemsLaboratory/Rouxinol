#include<iostream>

using namespace std;

void merge(int A[],int left,int mid,int right);
void mergeSort(int A[],int left,int right);

int count;
const int Sentinel = 2000000000;

int main(){
	int n;
	cin>>n;
	int *A;
	A = new int[n];

	for(int i=0;i<n;i++) cin>>A[i];

	mergeSort(A,0,n);

	for(int i=0;i<n;i++){
		if(i) cout<<" ";
		cout<<A[i];
	}
	cout<<endl;

	cout<<count<<endl;

	delete [] A;

	cin.get();
	cin.get();
}

void merge(int A[],int left,int mid,int right){
	int n1 = mid-left; int n2 = right-mid;
	int *L,*R;
	L = new int[n1+1]; R = new int[n2+1];
	for(int i=0;i<n1;i++) L[i] = A[left+i];
	for(int i=0;i<n2;i++) R[i] = A[mid+i];
	L[n1] = R[n2] = Sentinel;
	int i = 0 , j = 0;
	for(int k=left;k<right;k++){
		count++;
		if(L[i]<=R[j]){
			A[k] = L[i++];
		}else{
			A[k] = R[j++];
		}
	}
	delete [] L; delete [] R;
}

void mergeSort(int A[],int left,int right){
	if(left+1<right){
		int mid = (left+right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid,right);
		merge(A,left,mid,right);
	}
}