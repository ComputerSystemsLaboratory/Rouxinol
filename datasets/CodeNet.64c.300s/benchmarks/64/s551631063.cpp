#include <iostream>

using namespace std;

int main(){

	int a, b,c, gcd=1;
	int i;
	
	cin >> a >> b;
	while (b != 0){
		c = a%b;
		a = b;
		b = c;
	}

	cout << a << endl;
	return 0;
}