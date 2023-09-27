#include<iostream>

using namespace std;
const int SENTINEL=2000000000;

long long  merge(int A[],int n,int left,int mid,int right){
	int n1=mid-left;
	int n2=right-mid;
	int *L=new int[n1+1];
	int *R=new int[n2+1];
	for(int i=0;i<n1;++i) L[i]=A[left+i];
	for(int i=0;i<n2;++i) R[i]=A[mid+i];
	L[n1]=R[n2]=SENTINEL;
    int i=0,j=0;
    long long cnt=0;
    for(int k=left;k<right;k++){
    	
    	if(L[i]<=R[j])A[k]=L[i++];
    	else {
    		cnt+=n1-i;
    		A[k]=R[j++];
    	}
    }
    delete L;
    delete R;
    return cnt;

}
long long  mergeSort(int A[],int n,int left,int right){
   long long v1,v2,v3;
   if(left+1<right){
   		int mid=(left+right)/2;
   		v1=mergeSort(A,n,left,mid);
   		v2=mergeSort(A,n,mid,right);
   		v3=merge(A,n,left,mid,right);
   		return v1+v2+v3;
   }
   else return 0;
}
int main(){
	int n;
	cin>>n;
	int *A=new int[n];
	for(int i=0;i<n;++i)cin>>A[i];

	long long cnt=mergeSort(A,n,0,n);
		
	cout<<cnt<<endl;
	delete A;
	return 0;
}
