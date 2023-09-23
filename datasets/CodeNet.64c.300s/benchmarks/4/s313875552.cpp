#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a < b && b < c) ? "Yes" : "No") << endl;
}