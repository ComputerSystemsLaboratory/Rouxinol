#include <iostream>
using namespace std;
int a[2000001],b[2000001],c[10001];
int n,m;

void CountingSort(int k){
	for(int i=0;i<=k;i++){
		c[i]=0;
	}
	for(int i=0;i<n;i++){
		c[a[i]]++;
	}

	for(int i=1;i<=k;i++){
		c[i]=c[i]+c[i-1];
	}
	for(int i=n-1;i>=0;i--){
		b[c[a[i]]]=a[i];
		c[a[i]]--;
	}
}

int main(){
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>a[i];
		if(m<a[i])m=a[i];
	}
	CountingSort(m);

	for(int i=1;i<n;i++){
		cout << b[i]<<" ";
	}
	cout <<b[n]<<endl;

	return 0;
}