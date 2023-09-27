#include<bits/stdc++.h>
using namespace std;
int a[200005],L[100001],R[100001];long long cnt=0;
void merge(int l,int mid,int r){
	int n1=mid-l,n2=r-mid;
	for(int i=1;i<=n1;i++) L[i]=a[l+i-1];
	for(int i=1;i<=n2;i++) R[i]=a[mid+i-1];
	int i=1,j=1;L[n1+1]=R[n2+1]=1<<30;
	for(int k=l;k<r;k++){
		if (L[i]<R[j]){
			a[k]=L[i++];
		}
		else{
			a[k]=R[j++];
			cnt+=n1-i+1;
		}
	}
}
void mergesort(int l,int r){
	if (l+1<r){
		int mid =(l+r)/2;
		mergesort(l,mid);
		mergesort(mid,r);
		merge(l,mid,r);
	}
}

int main(){
	int n;cin>>n;
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	mergesort(1,n+1);
	printf("%lld\n",cnt);
}