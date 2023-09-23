#include <iostream>
using namespace std;
int main () {
	int a , b , c , count;
	cin >> a >> b >> c ;
	for (int i=a;i<=b;i++) {
		if ( c%i==0 ) {
			count = count + 1;
		}
	}
	cout << count << endl;
	return 0;
}
