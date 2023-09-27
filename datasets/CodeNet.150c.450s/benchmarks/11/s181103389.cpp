  #include <iostream>
 using namespace std ;
 int main()
 {
 	int a[4][14] , r = 1 , n , i , x , y , z ;
 	char q ;
 	cin >> n ;
 	n <= 54 ;
 	for ( i = 0 ; i < 4 ; i ++ ){
 		for ( z = 1 ; z < 14 ; z ++ )
 		{
 			a[i][z] = 0 ;
 		}
 	}
 	for ( i = 0 ; i < 4 ; i ++ ){
 		for ( z = 1 ; z < 14 ; z ++ )
 		{
 			while ( r <= n ){
 			cin >> q >> x ;
 			if ( q == 'S'){
 				y = 0 ;
 				a[y][x] = 1 ;
 			}
 			else if ( q == 'H' ){
 				y = 1 ;
 				a[y][x] = 1 ;
 			}
 			else if ( q == 'C' ){
 				y = 2 ;
 				a[y][x] = 1 ;
 			}
 			else if ( q == 'D' ){
 				y = 3 ;
 				a[y][x] = 1 ;
 			}
 			r ++ ;
 		}
 		  }
 	}
    for ( i = 0 ; i < 4 ; i ++ ){
    	for ( z = 1 ; z < 14 ; z ++ ){
             if ( i == 0  && a[i][z] == 0 )
             {
             	cout << "S" << " " << z << endl ;
             }
             else if ( i == 1 && a[i][z] == 0 ){
             	cout << "H" <<" " << z << endl ;
             }
             else if ( i == 2 && a[i][z] == 0 ){
             	cout << "C" << " "<< z << endl ; 
             }
             else if ( i == 3 && a[i][z] == 0 ){
             	cout << "D" << " "<< z << endl ;
             }
    		}
 	}
 }