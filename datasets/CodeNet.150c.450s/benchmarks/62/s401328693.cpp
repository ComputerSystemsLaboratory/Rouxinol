#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a > c) swap(a, c);
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	cout << a << " " << b << " " << c << "\n";
	return 0;
}