#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int cnt=0;
void merge(vector<int> &A,int left,int mid,int right){
	int n1=mid-left,n2=right-mid;
	vector<int> L,R;	for(int i=0;i<n1;i++){
		L.push_back(A[left+i]);
	}
	for(int i=0;i<n2;i++){
		R.push_back(A[mid+i]);
	}
	L.push_back(pow(10,9)+1);
	R.push_back(pow(10,9)+1);
	int i=0;
	int j=0;
	for(int k=left;k<right;k++){
		cnt++;
		if(L[i]<=R[j]){
			A[k]=L[i];
			i++;
		}else{
			A[k]=R[j];
			j++;
		}
	}
}

void mergeSort(vector<int> &A,int left,int right){
	if(left+1<right){
		int mid=(left+right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid,right);
		merge(A,left,mid,right);
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> S(n);
	for(int i=0;i<n;i++){
		cin>>S[i];
	}
	
	mergeSort(S,0,n);
	for(int i=0;i<n;i++){
		cout<<S[i];
		if(i!=n-1) cout<<' ';
	}
	cout<<'\n';
	cout<<cnt<<'\n';
	return 0;
}
