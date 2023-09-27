#include<iostream>

#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

int main(void) {
	int a = 0, b = 0, c = 0;

	CI a >> b >> c;
	
	if (a < b && b < c) {
		CO "Yes" E
	}
	else {
		CO "No" E
	}
	
}