#include<iostream>
#include<vector>

using namespace std;

int main( )
{	
    int n;
    cin>>n;
    
    vector<int> A(n);
    
    for( int i=0; i<n; i++ ) {
    	cin>>A[i];
    }
    int cnt = 0, minj;
    for( int i=0; i<n; i++ ) {
    	minj = i;
    	for( int j=i; j<n; j++ ) {
    		if( A[j] < A[minj] ) {
				minj = j;
    		}
    	}
    	if( i != minj ) {
    		swap( A[i], A[ minj ] );
    		cnt++;
    	}
    }
    for( int i=0; i<n; i++ ) {
    	cout<<A[i];
    	if( i != n-1 ) { cout<<" "; }
    }
    cout<<"\n"<<cnt<<endl;
	
	return 0;
}