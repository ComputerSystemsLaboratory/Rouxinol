#include<cstdio>
#include<stdio.h>
#include<string>
#include<iostream> 
#include<map>
using namespace std;
#include<algorithm>

bool two(int *a,int left,int right,int num){
	while(left<right){
		int mid=(left+right)/2;
		if(a[mid]==num){
			return true;
		}
		else if(a[mid]>num){
			right=mid;
		} 
		else if(a[mid]<num){
			left=mid+1;
		}
	}
	return false;
}

int main(){
	int n,q,a[100005],b[100005],count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	for(int i=0;i<q;i++){
		if(two(a,0,n,b[i])){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
