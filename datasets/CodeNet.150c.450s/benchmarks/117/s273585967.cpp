#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<vector>
#include<stack>
#include<list>

typedef long long ll;

using namespace std;

#define MAX 500000
#define SENTINRL 2000000000

int cnt;
int L[MAX/2+5],R[MAX/2+5];

void merge(int a[] , int left , int mid , int right){
	int n1 = mid-left;
	int n2 = right-mid;
	for(int i = 0 ; i<n1 ; i++){
		L[i] = a[left+i];
	}
	for(int i = 0 ; i<n2 ; i++){
		R[i] = a[mid+i];
	}
	L[n1] = R[n2] = SENTINRL;
	
	int i = 0,j = 0;
	for(int k = left ; k<right ; k++){
		cnt++;
		if(L[i]<=R[j]){
			a[k] = L[i++];
		}
		else{
			a[k] = R[j++];
		}
	}
}

void mergeSort(int a[] , int left , int right){
	if(left+1<right){
		int mid = (left+right)/2;
		mergeSort(a,left,mid);
		mergeSort(a,mid,right);
		merge(a,left,mid,right);
	}
}

int main(){
	ios::sync_with_stdio(false);
	int a[MAX+10];
	int n;	cin>>n;
	for(int i = 0 ; i<n ; i++){
		cin>>a[i];
	}
	
	mergeSort(a,0,n);
	
	
	for(int i = 0 ; i<n ; i++){
		if(i)	cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	cout<<cnt<<endl;
	return 0;
}