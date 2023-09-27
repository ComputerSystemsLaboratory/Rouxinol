#include<iostream>
#include<vector>
#define INFTY 1000000000;
using namespace std;
int count=0;
void merge(int a[],int left,int mid,int right){
	int i;
	int n1=mid-left;
	int L[n1];
	int n2=right-mid;
	int R[n2];
	for(i=0; i<n1; i++){
		L[i]=a[left+i];
	}
	for(int i=0; i<n2; i++){
		R[i]=a[mid+i];
	}
	L[n1]=INFTY;
	R[n2]=INFTY;
	int cnt1=0,cnt2=0;
	for(int k=left; k<right; k++){
		if(L[cnt1]<=R[cnt2]){
			a[k]=L[cnt1];
			cnt1++;
			count++;
		}else{
			a[k]=R[cnt2];
			cnt2++;
			count++;
		}
	}
}

void mergeSort(int a[],int left,int right){
	int mid;
	if(left+1<right){
		mid=(left+right)/2;
		mergeSort(a,left,mid);
		mergeSort(a,mid,right);
		merge(a,left,mid,right);
	}
}
	
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	mergeSort(a,0,n);
	for(int i=0; i<n; i++){
		cout<<a[i];
		if(i<n-1) cout<<" ";
	}
	cout<<endl<<count<<endl;
	return 0;
}
