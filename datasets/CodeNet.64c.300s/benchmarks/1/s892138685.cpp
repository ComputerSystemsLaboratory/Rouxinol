#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#define N 100
using namespace std;

void swap(int *,int *);
int partition(int [],int,int);

int main(){
	int n,a[100000];
	cin>>n;
	for(int i=0;i<n;i++) cin >> a[i];
	int k = partition(a,0,n-1);
	for(int i=0;i<n;i++){
		if(i==k) cout<< "["<<a[i]<<"]";
		else cout<<a[i];
		if(i!=n-1) cout<<" ";
	}
	cout<<endl;
	return 0;
}

int partition(int a[],int p,int r){
	int x=a[r];
	int i=p-1;
	for(int j=p;j<r;j++){
		if(a[j]<=x){
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
	return i+1;
}

void swap(int *a,int *b){
	int w=*a;
	*a=*b;
	*b=w;
}