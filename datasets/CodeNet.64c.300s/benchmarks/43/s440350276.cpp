#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, suma = 0, sumb = 0;
	cin >> a >> b >> c >> d;
	suma = a + b + c + d;
	cin >> a >> b >> c >> d;
	sumb = a + b + c + d;
	if (suma > sumb) cout << suma << endl;
	else cout << sumb << endl;
}