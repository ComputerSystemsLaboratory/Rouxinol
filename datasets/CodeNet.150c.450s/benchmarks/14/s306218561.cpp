#include <iostream>
#include <string>

using namespace std;

// cl /EHsc xxx.cpp
void call(int n)
{
	int i = 1;
	do { // CHECK_NUM:
		int x = i;
		if ( x % 3 == 0 ) {
			cout << " " << i;
		} else {
			do { // INCLUDE3:
				if ( x % 10 == 3 ) {
					cout << " " << i;
					break;
				}
				x /= 10;
			} while ( x ); // goto INCLUDE3;
		}
	} while (++i <= n); // goto CHECK_NUM;
	
	cout << endl;
}

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	call(n);
	
	return 0;
}