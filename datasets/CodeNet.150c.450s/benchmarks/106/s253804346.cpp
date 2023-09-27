 #include <iostream>
using namespace std;
int main(){
	int a , b , c , x , y ;
	cin >> a >> b >> c ;
	1 <= a , b , c <= 10000 ;
	a <= b ;
	y = 0 ;
	for ( x = a ; x <= b ; x += 1 )
	if ( c % x == 0 )
		y += 1 ;
		cout << y << endl;
}