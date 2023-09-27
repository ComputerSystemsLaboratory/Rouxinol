#include<iostream>
#define INF 0x7fffffff;
using namespace std;
const int maxn=500010;
int a[maxn];
int L[maxn/2+2],R[maxn/2+2];
int n,cnt=0;
void merge(int a[],int left,int mid ,int right){
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++)L[i]=a[left+i];
	for(int i=0;i<n2;i++)R[i]=a[mid+i];
	int i=0,j=0;
	L[n1]=R[n2]=INF;
	for(int k=left;k<right;k++){
		cnt++;
		if(L[i]<R[j])
			a[k]=L[i++];
		else
			a[k]=R[j++];
	}
}
void mergesort(int a[],int left,int right ){
	if(left+1<right){
		int mid=(left+right)/2;
		mergesort(a,left,mid);
		mergesort(a,mid,right);
		merge(a,left,mid,right);
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	mergesort(a,0,n);
	for(int i=0;i<n;i++){
		if(i>0)cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	cout<<cnt<<endl;
	return 0;
}