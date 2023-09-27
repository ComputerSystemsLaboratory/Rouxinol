#include <iostream>
void call(int n);
int main(int argc, char const* argv[])
{
	int n;
	std::cin >> n;
	call(n);
	return 0;
}

using namespace std;

void call(int n){
	int i = 1;
	do {
		int x = i;
		if ( x % 3 == 0 ){
			cout << " " << i;
		} else {
			do {
				if ( x % 10 == 3 ){
					cout << " " << i;
					break;
				}
				x /= 10;
			} while( x ) ;
		}
	} while ( ++i <= n );

	cout << endl;
}