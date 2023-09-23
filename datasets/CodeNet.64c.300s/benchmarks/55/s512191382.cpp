#include <iostream>
using namespace std;

int main(void)
{
	int i=1;
	int in;
	while (1) {
		cin >> in;
		if (in==0) {
			break;
		}
		else {
			cout << "Case" << " " << i << ":" << " " << in << endl;
			i++;
		}
	}
	return 0;
}

