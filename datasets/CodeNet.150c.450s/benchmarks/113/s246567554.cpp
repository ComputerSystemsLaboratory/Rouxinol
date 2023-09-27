#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;


int main(void)
{
	int i = 0;
	while (true) {
		unsigned long x = 0;
		cin >> x;
		i++;
		if (x != 0) {
			cout << "Case " << i << ": " << x<<"\n";
		}
		else {
			break;
		}

	}
	return 0;
}

