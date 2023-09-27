#include<iostream>

using namespace std;

int main()
{

	int n;
	int a[101];
	int i;
	
	cin>>n;	
	for( i=0; i<n; i++ ) {
		cin>>a[i];
	}
	for( i=n-1; 0<=i; i-- ) {
		if( 0 != i ) {
			cout <<a[i]<<" ";
		} else {
			cout <<a[i]<<endl; 
		}
	}
	
    return 0;
}