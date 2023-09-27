#include<iostream>
using namespace std;

void swap(int A[],int a,int b){
	int tmp=A[a];
	A[a]=A[b];
	A[b]=tmp;
}

int partition(int a[],int p,int r){
	int x=a[r];
	int i=p-1;
	for(int j=p;j<r;j++){
		if(a[j]<=x){
			i++;
			swap(a,i,j);
		}
	}
	swap(a,i+1,r);
	return i+1;
}

int main(){
	int n, a[100000];
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	int idx = partition(a,0,n-1);
	for(int i=0;i<n;i++){
		if(i==idx){
			cout << "[";
		}
		cout << a[i];
		if(i==idx){
			cout << "]";
		}
		if(i != n-1){
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}

