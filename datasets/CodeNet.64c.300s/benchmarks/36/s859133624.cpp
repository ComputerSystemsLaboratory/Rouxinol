#include <iostream>
using namespace std;
 int main (){
    int a, b, c, x ;
    cin >>a >>b >>c;
    if(a > b ) {
		x=a;
		a=b;
		b=x;
	};
	if(b > c ) {
		x=c;
		c=b;
		b=x;
	};
	if(a > b) {
		x=a;
		a=b;
		b=x;
	};

	cout <<a <<" " << b << " " << c <<"\n";

    return 0 ;
 
}