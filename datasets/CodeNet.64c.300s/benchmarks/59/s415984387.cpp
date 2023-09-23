#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n , i , j=0 , x[100001];
	cin >> n ;
	for( i=0 ; i<n ; i++ ){
		cin >> x[i] ;
		int total=0;
		if( x[i]%2==0 && x[i] != 2 ) continue ;
		int N=sqrt( x[i] );
		for( int k=1; k<=N ; k++ ){
			if(x[i]%k ==0 )
				total++;
		}
		if( total == 1 ){
			j++;
		}
	}
	cout << j<< endl;
}