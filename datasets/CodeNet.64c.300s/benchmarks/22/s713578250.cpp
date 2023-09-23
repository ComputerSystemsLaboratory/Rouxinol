#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n , x , y , z , ans=0;
	cin >> n ;
	int i , j ;
	for( i=1 ; i<=n ; i++ ){
		cin >> x >> y >> z ;
		ans=0;
		j=0;
		if( x*x+y*y== z*z )
			ans ++ ;
		if( y*y+z*z== x*x )
			ans++;
		if( z*z+x*x==y*y )
			ans++;
		if( ans!=0)
			cout <<"YES" << endl;
		else cout <<"NO"<< endl;
	}
}