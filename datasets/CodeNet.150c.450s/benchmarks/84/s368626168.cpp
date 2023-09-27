#include<iostream>
using namespace std;
typedef long long ll;
const int MAX=200005;
const ll SENTINEL=1ll<<32;
ll n,a[MAX],temp1[MAX/2],temp2[MAX/2];
ll merge(ll s[],int left, int right){
	ll cnt=0;
	int mid=left+(right-left)/2;
	int len1=mid-left,len2=right-mid;
	for(int i=0;i<len1;i++)temp1[i]=s[left+i];
	for(int i=0;i<len2;i++)temp2[i]=s[mid+i];
	int i=0,j=0,k;
	temp1[len1]=temp2[len2]=SENTINEL;
	for(k=left;k<right;k++){
		if(temp1[i]<=temp2[j]){
			s[k]=temp1[i++];
		}else {
			s[k]=temp2[j++];
			cnt+=len1-i;
		}
	}
	return cnt;
}
ll MergeSort(ll s[],int left,int right){
	if(left+1<right){
		int mid=left+(right-left)/2;
		ll cnt=0;
		cnt+=MergeSort(s,left,mid);
		cnt+=MergeSort(s,mid,right);
		cnt+=merge(s,left,right);
		return cnt;
	}
	return 0;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<MergeSort(a,0,n)<<endl;
	return 0;
}
