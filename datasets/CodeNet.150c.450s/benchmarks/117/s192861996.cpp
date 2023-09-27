#include<iostream>

using namespace std;
const int SENTINEL=2000000000;
int cnt=0;
void merge(int A[],int n,int left,int mid,int right){
	int n1=mid-left;
	int n2=right-mid;
	int *L=new int[n1+1];
	int *R=new int[n2+1];
	for(int i=0;i<n1;++i) L[i]=A[left+i];
	for(int i=0;i<n2;++i) R[i]=A[mid+i];
	L[n1]=R[n2]=SENTINEL;
    int i=0,j=0;
    for(int k=left;k<right;k++){
    	cnt++;
    	if(L[i]<=R[j])A[k]=L[i++];
    	else A[k]=R[j++];
    }
    delete L;
    delete R;

}
void mergeSort(int A[],int n,int left,int right){
   if(left+1<right){
   		int mid=(left+right)/2;
   		mergeSort(A,n,left,mid);
   		mergeSort(A,n,mid,right);
   		merge(A,n,left,mid,right);
   }
}
int main(){
	int n;
	cin>>n;
	int *A=new int[n];
	for(int i=0;i<n;++i)cin>>A[i];

	mergeSort(A,n,0,n);
	
	for(int i=0;i<n;++i){
		if(i>0)cout<<' ';
		cout<<A[i];
	}
	cout<<endl;

	cout<<cnt<<endl;
	delete A;
	return 0;
}
