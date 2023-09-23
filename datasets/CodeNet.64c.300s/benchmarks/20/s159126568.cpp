#include <iostream>
using namespace std;

#define F(d, i) ((d) * (i) * (i))

int main(void)
{
	int d;

	while(cin >> d) {
		unsigned long s = 0;

		for(int i = d; i < 600; i += d) {
			s += F(d, i);
		}

		cout << s << endl;
	}

	return 0;
}