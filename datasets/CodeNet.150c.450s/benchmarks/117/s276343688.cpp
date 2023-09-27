#include<stdio.h>
#include<math.h>
#include<string>
#include<iostream>
using namespace std;
int n,a[500005];
int cnt;
int L[250005],R[250005];
void merge(int left,int mid,int right){
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++)L[i]=a[left+i];
	for(int i=0;i<n2;i++)R[i]=a[mid+i];
	L[n1]=R[n2]=1e9;
	int i=0,j=0;
	for(int k=left;k<right;k++){
		cnt++;
		if(L[i]<R[j])a[k]=L[i++];
		else a[k]=R[j++];
	}
}
void ef(int left,int right){
	int mid;
	if(left+1<right){
		mid=(left+right)/2;
		ef(left,mid);
		ef(mid,right);
		merge(left,mid,right);
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	ef(0,n);
	for(int i=0;i<n;i++){
		if(i)cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	cout<<cnt<<endl;
	return 0;
}
