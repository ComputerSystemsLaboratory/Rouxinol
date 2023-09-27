#include <iostream>
using namespace std;
#define HOUR 3600
#define MINUTE 60

int S, h, m, s;

int main(){

	
	do {
		cin >> S;
	} while (S < 0 || S>86400);

		h = S / HOUR;
		m = ( S - (HOUR * h) ) / MINUTE;
		s = S - ((HOUR * h) + (MINUTE * m));


		cout << h << ":" << m << ":" << s << endl;




	return 0;
}