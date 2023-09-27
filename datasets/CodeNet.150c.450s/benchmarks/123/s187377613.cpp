#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main()
{
    int sosu , n , cnt = 0 , cnt2 = 0;
    
    cin >> n;
    for( int i = 0; i < n; i++ ){
	cin >> sosu;
	if( sosu == 2 || sosu == 3  || sosu == 5 || sosu == 7 ){
	    cnt++;
	    // cout << cnt << endl;
	}
	
	else if( sosu % 2 != 0 ){
	    for( int j = 3; j <= sqrt(sosu); j += 2 ){
		if( sosu % j == 0) cnt2++;
	    }
	    if( cnt2 == 0 ) cnt++;
	    cnt2 = 0;
	} 
    }
    
	
    cout << cnt << endl;
    
    
    return 0;
}