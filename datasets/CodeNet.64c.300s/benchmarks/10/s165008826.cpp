#include <iostream>

using namespace std;

bool data_end(int x, int y);
void print_asc(int x, int y);
int main()
{
	int x,y;

	while(cin >> x >> y && !data_end(x,y)){
		print_asc(x,y);	
	}
	return 0;
}
bool data_end(int x,int y)
{
	if ( x == 0 && y == 0 ) return true;
	return false;
}
void print_asc(int x, int y)
{
	if( x <= y ) cout << x << ' ' << y << '\n';
	else cout << y << ' ' << x << '\n';
}