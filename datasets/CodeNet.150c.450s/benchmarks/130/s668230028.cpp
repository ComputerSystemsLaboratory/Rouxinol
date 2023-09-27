#include<iostream>

using namespace std;

int main()
{
	int a[101][101],b[101];
	int c;
	int n,m;
	
	cin>>n>>m;
	for( int i=0; i<n; i++ ) {
		for( int j=0; j<m; j++ ) {
			cin>>a[i][j];
		}
	}	
	for( int i=0; i<m; i++ ) {
		cin>>b[i];
	}
	for( int i=0; i<n; i++ ) {
		c=0;
		for( int j=0; j<m; j++ ) {
			c+=(a[i][j]*b[j]);
		}
		cout<<c<<endl;
	}
	
    return 0;
}