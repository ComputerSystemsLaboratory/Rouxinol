#include<iostream>
#include<vector>

using namespace std;

int main( )
{	
    int n;
    int maxProfit = 1-1000000000;
    int Rj, Ri = 2000000000;
	ios::sync_with_stdio( false );
    cin>>n;
    
    cin>>Ri;
    for( int i=1; i<n; i++ ) {
    	cin>>Rj;
        if( maxProfit < Rj - Ri ) {
       		maxProfit = Rj - Ri;
       	}
       	if( Rj < Ri ) {
    		Ri = Rj;
    	}
    }    

    cout<<maxProfit<<endl;
	
	return 0;
}