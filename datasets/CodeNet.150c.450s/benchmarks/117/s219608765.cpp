#include <iostream>
#define INF 2000000000
using namespace std;

int L[250001],R[250001];
int cnt;

void merge(int a[],int l,int m,int r){
	int n1=m-l;
	int n2=r-m;
	for(int i=0;i<n1;i++)
		L[i]=a[l+i];
	for(int i=0;i<n2;i++)
		R[i]=a[m+i];
	L[n1]=INF;
	R[n2]=INF;
	int i=0,j=0;
	for(int k=l;k<r;k++){
		if(L[i]<=R[j])
			a[k]=L[i++];
		else
			a[k]=R[j++];
		cnt++;
	}
}

void mergesort(int a[],int l,int r){
	if(l+1<r){
		int m=(l+r)/2;
		mergesort(a,l,m);
		mergesort(a,m,r);
		merge(a,l,m,r);
	}
}

int main(){
	int n,a[500000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	mergesort(a,0,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<((i!=n-1)?' ':'\n');
	cout<<cnt<<endl;
	return 0;
}