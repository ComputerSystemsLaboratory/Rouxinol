#include <iostream>
using namespace std;

int main()
{
	for (unsigned a, b; cin >> a >> b;) {
		unsigned count = 1;
		for (a = (a + b) / 10; a; a /= 10) {
			count++;
		}
		cout << count << endl;
	}
	return 0;
}