  #include <iostream>
using namespace std ;
int main()
{
	int n , b , f , r , v , a[5][4][11] , y , c = 1 , l , o , i , h , w ;
  for ( i = 1 ; i < 5 ; i ++ ){
   for ( h = 1 ; h < 4 ; h ++ ){
   	for ( w = 1 ; w < 11 ; w ++ ){
   		a[i][h][w] = 0 ;
   	}
  }
}
 cin >> n ;
 while ( c <= n ){
 	cin >> b >> f >> r >> v ;
 	b <= 4 ;
 	f <= 3 ;
 	r <= 10 ;
 	v <= 9 ; 
 	a[b][f][r] = a[b][f][r] + v ;
 	a[b][f][r] >= 0 ;
 	c ++ ;
}
   for ( i = 1 ; i < 5 ; i ++ ){
  	for ( h = 1 ; h < 4 ; h ++ ){
  		for ( w = 1 ; w < 11 ; w ++ ){
  			cout << " " << a[i][h][w] ;
  		}
  		cout << endl ;
  	}
  if ( i < 4 )
  	cout << "####################" << endl ;
  }
}