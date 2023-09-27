#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main( )
{	
    int n;
    cin>>n;
    
    vector<int> A(n);
    
    for( int i=0; i<n; i++ ) {
    	cin>>A[i];
    }
    int cnt = 0;
    for( int i=0; i<n; i++ ) {
    	for( int j=n-1; i<j; j-- ) {
    		if( A[j] < A[ j-1 ] ) {
    			swap( A[j], A[ j-1 ] );
    			cnt++;
    		}
    	}
    }
    for( int i=0; i<n; i++ ) {
    	cout<<A[i];
    	if( i != n-1 ) { cout<<" "; }
    }
    cout<<"\n"<<cnt<<endl;
	
	return 0;
}