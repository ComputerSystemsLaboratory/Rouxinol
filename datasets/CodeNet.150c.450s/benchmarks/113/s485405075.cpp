#include<iostream>

#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

int main(void) {
	int x = 0;
	int i = 1;
	while (1) {
		CI x;
		if (x == 0) {
			return 0;
		}
		CO "Case " << i << ": " << x E
		++i;
	}
}