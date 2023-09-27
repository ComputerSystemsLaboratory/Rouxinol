#include<iostream>
using namespace std;

long long merge(int A[],int left,int mid,int right);
long long mergeSort(int A[],int left,int right);

const int Sentinel = 2000000000;

int main(){
	int n,*A; cin>>n;
	A = new int[n];
	for(int i=0;i<n;i++) cin>>A[i];

	long long count = mergeSort(A,0,n);
	cout<<count<<endl;

	//for(int i=0;i<n;i++){
	//	if(i) cout<<" ";
	//	cout<<A[i];
	//}
	//cout<<endl;

	delete [] A;
	cin.sync(); cin.get();
}

long long merge(int A[],int left,int mid,int right){
	int n1 = mid-left , n2 = right-mid, *L, *R; long long count = 0;
	L = new int[n1+1]; R = new int[n2+1];
	for(int i=0;i<n1;i++) L[i] = A[left+i];
	for(int i=0;i<n2;i++) R[i] = A[mid+i];
	L[n1] = R[n2] = Sentinel;
	int i = 0, j = 0;
	for(int k=left;k<right;k++){
		if(L[i]<=R[j]) A[k] = L[i++];
		else{
			A[k] = R[j++];
			count += n1-i;
		}
	}
	delete [] L; delete [] R;
	return count;
}

long long mergeSort(int A[],int left,int right){
	long long count1 = 0, count2 = 0, count3 = 0;
	if(left+1<right){
		int mid = (left+right)/2;
		count1 = mergeSort(A,left,mid);
		count2 = mergeSort(A,mid,right);
		count3 = merge(A,left,mid,right);
		return count1+count2+count3;
	}else return 0;
}