 #include <iostream>
using namespace std;
int main(){
	long long  h , w , i , j , x , y , number[400][400] ;
	cin >> h >> w ;
	for ( i = 1 ; i <= h ; i ++ ){
		for ( j = 1 ; j <= w ; j++ ){
			cin >> number[i][j] ;
			number[i][w+1] += number[i][j] ;
			number[h+1][j] += number[i][j] ;
			number[h+1][w+1] += number[i][j] ; 
	}
}
	for ( i = 1 ; i <= h ; i ++ ){
		for ( j = 1 ; j <= w ; j ++ ){
			cout << number[i][j] << " " ;
		}
		cout << number[i][w+1] ;
		cout << endl ;
	}
	for ( j = 1 ; j <= w ; j ++ ){
		cout << number[h+1][j] << " " ;
	}
	cout << number[h+1][w+1] << endl ;
}