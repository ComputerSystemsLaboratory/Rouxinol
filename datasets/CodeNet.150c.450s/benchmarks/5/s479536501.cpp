#include <iostream>
using namespace std;

int main() {
	int n,i;
	int *a;
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++) {
		cin>>a[i];
	}
	
	for(--i;i>=0;i--) {
		cout<<a[i];
		if(i) {
			cout<<" ";
		}
	}
	cout<<endl;
	return 0;
}