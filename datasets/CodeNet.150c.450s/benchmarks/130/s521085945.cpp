 #include <iostream>
using namespace std ;
int main(){
	int b[1000] , a[1000][100] , c , i = 1 , x , g , y , h = 1 , u = 0 ;
	cin >> x >> y ;
	for ( i = 1 ; i <= x ; i ++ ){
		for ( g = 1 ; g <= y ; g ++ ){
			cin >> a[i][g] ;
		}
	}
	for ( i = 1 ; i <= y ; i ++ ){
		cin >> b[i] ;
	}
	for ( i = 1 ; i <= x ; i ++ ){
		u = 0 ;
		for ( g = 1 ; g <= y ; g ++ ){
  			u += ( a[i][g] * b[g] ) ;
  		}
  		cout << u << endl ;
	}
	}