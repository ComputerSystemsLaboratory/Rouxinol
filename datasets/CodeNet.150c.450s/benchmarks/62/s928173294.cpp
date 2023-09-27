#include<iostream>

#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

int main(void) {
	int a = 0, b = 0, c = 0;
	int temp = 0;

	CI a >> b >> c;
	
	if (a > b) {
		temp = b;
		b = a;
		a = temp;
	}
	if(b > c){
		temp = c;
		c = b;
		b = temp;
	}
	if (a > b) {
		temp = b;
		b = a;
		a = temp;
	}
	if (b > c) {
		temp = c;
		c = b;
		b = temp;
	}

	CO a << " " << b << " " << c E
	
}