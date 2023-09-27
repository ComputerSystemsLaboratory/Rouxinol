 #include <iostream>
using namespace std ;
int main(){
	int x , y , number[101] , i , j , k , cn= 0 ;
	while ( 1 ){
		cn = 0 ;
	cin >> x >> y ;
	if ( x + y == 0 ) break ;
	for ( i = 1 ; i<=x ; i ++ ){
		number[i] = i ;
	}
	for ( i = 1 ; i <= x ; i ++ ){
		for ( j = i + 1 ; j <= x ; j ++ ){
			for ( k = j + 1 ; k <= x ; k ++ ){
				if ( number[i] + number[j] + number[k] == y ){
					cn ++ ;
				}
			}
		}
	}
	cout << cn << endl ;
}
}