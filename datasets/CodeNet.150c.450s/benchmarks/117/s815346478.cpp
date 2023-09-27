
#include<bits/stdc++.h>

using namespace std;

const int maxn=5e5+5;
const int sentinel=2e9+5;

int l[maxn/2+5],r[maxn/2+5],cnt;

void merge(int a[],int left,int mid,int right)
{
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++){
		l[i]=a[left+i];
	}
	for(int i=0;i<n2;i++){
		r[i]=a[mid+i];
	}
	l[n1]=r[n2]=sentinel;
	int i=0,j=0;
	for(int k=left;k<right;k++){
        cnt++;
		if(l[i]<=r[j]){
			a[k]=l[i++];
		}else{
			a[k]=r[j++];
		}
	}
}

void mergesort(int a[],int left,int right)
{
	if(left+1<right){
		int mid=((right+left)>>1);
		mergesort(a,left,mid);
		mergesort(a,mid,right);
		merge(a,left,mid,right);
	}
}

int main()
{
	int a[maxn],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n);
	for(int i=0;i<n;i++){
		if(i){
			cout<<" ";
		}
		cout<<a[i];
	}
	cout<<endl;
    cout<<cnt<<endl;
	return 0;
}
/*
10
8 5 9 2 6 3 7 1 10 4
*/

