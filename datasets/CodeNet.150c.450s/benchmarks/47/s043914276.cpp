#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int w,h,x,y,r;
	cin >> w >> h >> x >> y >> r;
	
	if ( x-r >= 0 && x+r <= w ) {		
		if ( y-r >= 0 && y+r <= h ) {
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
	}else{
		cout << "No\n";
	}
	return 0;
}