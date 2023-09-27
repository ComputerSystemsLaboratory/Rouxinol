#include<iostream>

using namespace std;

int main() {
	int a, b, r;
	cin >> a >> b;
	if ((0 == a) || (0 == b)){
	r = 0;
}
r = a % b;
while (r != 0)
{
	a = b;
	b = r;
	r = a % b;

}
	cout << b << endl;
	return 0;
}
