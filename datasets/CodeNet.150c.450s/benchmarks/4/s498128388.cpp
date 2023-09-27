#include <iostream>
using namespace std;
int main()
{
	int m, f, r, t;
	while(true)
	{
		cin >> m >> f >> r;
		if( -1 == m && -1 == f && -1 == r )
			break;

		if( m == -1 || f == -1 ){
			cout << "F\n";
			continue;
		}
		
		t = m + f;
		if( t >= 80 ) cout << "A\n";
		else if( t >= 65 && t < 80 ) cout << "B\n";
		else if( t >= 50 && t < 65 ) cout << "C\n";
		else if( t >= 30 && t < 50 ){
			if( r >= 50 ) cout << "C\n";
			else		  cout << "D\n";
		}
		else cout << "F\n";
	}
	return 0;
}