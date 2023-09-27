#include<iostream>
#include<math.h>

using namespace std;

int main(void) {
	int a = 0, b = 0;
	int v = 0;
	int length = 0;
	cin >> a >> b;
	
	v = a * b;
	length = 2 * (a + b);

	cout << v << " " << length << endl;
	return 0;
}