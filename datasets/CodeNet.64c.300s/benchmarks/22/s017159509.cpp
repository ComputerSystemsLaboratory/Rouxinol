#include <iostream>
using namespace std;
#define max(a,b) ((a > b)? a:b)
int main()
{
	int a, b, c, d,i = 0, num;
	cin >> d;
	while (i < d) {
		cin >> a >> b >> c;
		num = max(a, max(b,c));
		if (num == a) {
			if (a * a == b * b + c * c) {
				cout << "YES" << endl; }
			else { cout << "NO" << endl; }
		}
		else if (num == b) {
			if (b * b == a * a + c * c) {
				cout << "YES" << endl;	}
			else { cout << "NO" << endl; }
		}
		else if (num == c) {
			if (c * c == a * a + b * b) {
				cout << "YES" << endl;	}
			else { cout << "NO" << endl; }
		}
		else { cout << "NO" << endl; }
		i++;
	}
    return 0;
}