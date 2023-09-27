#include <iostream>
using namespace std;

int main() {
	int n;
	int a[1000];
	cin>>n;
	int i;
	for(i=0;i<n;i=i+1){
		cin>>a[i];
	}
	for(i=1;i<=n-1;i=i+1){
		cout<<a[n-i]<<" ";
	}
	cout<<a[0]<<endl;
	return 0;
}