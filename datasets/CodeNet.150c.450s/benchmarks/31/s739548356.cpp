#include<iostream>

using namespace std;

int main( )
{	
    int n;
    
    cin>>n;
    
    int maxProfit = 1-1000000000;
    int Rj, Ri = 1000000000;
    cin>>Ri;
    n--;
    while( n-- ) {
    	cin>>Rj;
       	maxProfit = max( maxProfit, Rj - Ri  );
    	Ri = min( Ri, Rj );
    }
    cout<<maxProfit<<endl;
	
	return 0;
}