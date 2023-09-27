#include<iostream>
#define LL long long
#define  INF 0x7fffffff;
using namespace std;
const int maxn=500010;
int a[maxn];
int L[maxn/2+2],R[maxn/2+2];
int n;
LL merge(int left,int mid ,int right){
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++)L[i]=a[left+i];
	for(int i=0;i<n2;i++)R[i]=a[mid+i];
	int i=0,j=0;
	L[n1]=R[n2]=INF;
	LL s=0;
	for(int k=left;k<right;k++){
		if(L[i]<=R[j])
			a[k]=L[i++];
		else{
			a[k]=R[j++];
			s+=n1-i;
		}
	}
	return s;
}
LL mergesort(int left,int right ){//[left,right)
	LL c1,c2,c3;
	if(left+1<right){//避免死循? 
		int mid=(left+right)/2;
		c1=mergesort(left,mid);
		c2=mergesort(mid,right);
		c3=merge(left,mid,right);
		return c1+c2+c3;
	}
	else 
		return 0;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<mergesort(0,n)<<endl;
	return 0;
}