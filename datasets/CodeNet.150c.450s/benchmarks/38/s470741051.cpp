#include <iostream>

using namespace std;

bool isRightTriangle(int a, int b, int c)
{
	return (a*a + b*b == c*c);
}

int main()
{
	int num_of_test;
	cin >> num_of_test;
	
	int a,b,c;
	for (int i=0; i<num_of_test; i++) {
		cin >> a; cin >> b; cin >> c;
		if ( isRightTriangle(a,b,c) || isRightTriangle(c,a,b) || isRightTriangle(b,c,a) ) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}