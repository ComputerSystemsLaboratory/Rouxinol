#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *a, int p, int r){
	int x, i;
	x = a[r];
	i = p - 1;
	for(int j=p;j<r;++j){
		if(a[j]<=x){
			++i;
			swap(&(a[i]),&(a[j]));
		}
	}
	swap(&(a[i+1]),&(a[r]));
	return i+1;
}

int main() {
	int n, *a, p;
	cin>>n;
	a = new int[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	p = partition(a,0,n-1);
	for(int i=0;i<n;++i){
		if(i==p)cout<<(i?" ":"")<<"["<<a[i]<<"]";
		else cout<<(i?" ":"")<<a[i];
	}
	cout<<endl;
	return 0;
}