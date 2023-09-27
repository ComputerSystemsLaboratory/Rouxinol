#include <iostream>
using namespace std;

int main(){
	
	int a , b , c , x , y , z;
	cin >> a >> b >> c;
	//(a>b) ? (b>c) ? x=c , y=b , z=a : (c>a) ? x=b , y=a , z=c : x=b , y=c , z=a : (a>c) ? x=c , y=a , z=b :(c>b) ? x=a , y=b , z=c : x=a , y=c , z=b;
    //cout << x << " " << y << " " << z << endl;
	if (a>=b){
		if (b>=c) {
			cout << c << " " << b << " " << a << endl; 
		} else if (c>=a) {
			cout << b << " " << a << " " << c << endl;
		} else {
			cout << b << " " << c << " " << a << endl;
		}
	} else if (a<b){
		if (a>=c){
			cout << c << " " << a << " " << b << endl;
		} else if (c>=b){
			cout << a << " " << b << " " << c << endl;
		} else {
			cout << a << " " << c << " " << b << endl;
		}
	}
	return 0;
}