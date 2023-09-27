#include<iostream>

using namespace std;

int main( )
{	
    int n;
    
    cin>>n;
    
    int maxProfit = 1-1000000000;
    int Rj, Ri, t;
    
    cin>>Ri;
    for( int i=1; i<n; i++ ) {
    	cin>>Rj;
    	t = Rj - Ri;
    	if( maxProfit < t ) {
       		maxProfit = t;
       	}
       	if( Rj < Ri ) {
    		Ri = Rj;
    	}
    }
    cout<<maxProfit<<endl;
	
	return 0;
}