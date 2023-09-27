#include <iostream>
using namespace std;
void countingSort(int *a, int *b, int k, int n){
	int *c = new int[k+1];
	for(int i=0;i<k+1;++i)c[i] = 0;
	for(int j=0;j<n;++j)c[a[j]]++;
	for(int i=1;i<k+1;++i)c[i] += c[i-1];
	for(int j=n-1;j>=0;--j){
		b[c[a[j]]-1] = a[j];
		c[a[j]]--;
	}
}

int max(int *a, int n){
	int m = 0;
	for(int i=0;i<n;++i){
		if(m<a[i])m=a[i];
	}
	return m;
}

int main() {
	int n, *a, *b, k;
	cin>>n;
	a = new int[n];
	b = new int[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	k = max(a,n);
	countingSort(a,b,k,n);
	for(int i=0;i<n;++i){
		cout<<(i?" ":"")<<b[i];
	}
	cout<<endl;
	
	return 0;
}