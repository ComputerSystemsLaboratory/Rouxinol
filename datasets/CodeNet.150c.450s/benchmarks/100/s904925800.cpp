#include <iostream>

using namespace std;

int main(void) {
	int i;
	unsigned long long in;

	cin >> in;
	for(i=in;i>1;i--) {
		in*=i-1;
	}
	cout << in << endl;

	return 0;
}