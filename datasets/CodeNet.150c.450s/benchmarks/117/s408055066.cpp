#include<iostream>
#define MAX 500000
#define INF 2000000000
using namespace std;

int L[MAX/2+2],R[MAX/2+2];
int cnt = 0;

void Merge(int a[], int n, int left, int mid, int right){
	for(int i = 0; i < mid-left; i++)	L[i] = a[left+i];
	for(int i = 0; i < right-mid; i++)	R[i] = a[mid+i];
	L[mid-left] = R[right-mid] = INF;
	int i = 0, j = 0;
	for(int k = left; k < right; k++){
		cnt++;
		if(L[i] <= R[j])	a[k] = L[i++];
		else	a[k] = R[j++];
	} 
}

void Merge_sort(int a[], int n, int left, int right){
	if(left+1 < right){
		int mid = (right+left)/2;
		Merge_sort(a, n, left, mid);
		Merge_sort(a, n, mid, right);
		Merge(a, n, left, mid, right);
	}
}

int main(){
	int a[MAX], n;
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
	Merge_sort(a, n, 0, n);
	for(int i = 0; i < n; i++){
		if(i)	cout<<" ";
		cout<<a[i];
	}
	cout<<endl<<cnt<<endl;
	return 0 ;
}

