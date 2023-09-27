#include<iostream>
using namespace std;
typedef long long ll;
const int inf=0x3f3f3f3f;
int a[200010],l[100010],r[100010];
ll merge(int a[],int left,int mid,int right){
	ll cnt=0;
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;++i) l[i]=a[left+i];
	for(int i=0;i<n2;++i) r[i]=a[mid+i];
	int k=0,j=0;
	l[n1]=r[n2]=inf;
	for(int i=left;i<right;++i){
		if(l[k]<=r[j]) a[i]=l[k++];
		else{
			a[i]=r[j++];
			cnt+=n1-k;
		}
	}
	return cnt;
}
ll mergesort(int a[],int left,int right){
	if(left+1<right){
		int mid=(left+right)/2;
		ll t1=mergesort(a,left,mid);
		ll t2=mergesort(a,mid,right);
		ll t3=merge(a,left,mid,right);
		return t1+t2+t3;
	}else{
		return 0;
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	cout<<mergesort(a,0,n)<<endl;
	return 0;
}
