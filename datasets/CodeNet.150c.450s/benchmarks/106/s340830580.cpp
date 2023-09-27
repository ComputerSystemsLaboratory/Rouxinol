   #include <iostream>
using namespace std;
	int main(){
		int a,b,c,x,y,n;
		n = 0;
		cin >> a >> b >> c ;
		a <= b ;
		1 <= a,b,c <= 10000;
		while ( x  <= b  ){
			for ( x = a ; x <= b ; x ++ )
			if ( c % x == 0 )
				n = n + 1;
			}
		cout << n << endl;
	}