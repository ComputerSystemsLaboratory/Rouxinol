#include <iostream>
using namespace std;

int main(){
	int x, y;
	int a, b, r;
	int gcd;
	
	cin >> x >> y;
	
	if(x > y){
		a = x;
		b = y;
	}else {
		a = y;
		b = x;
	}
	
	do{
		r = a % b;
		gcd = a = b;
		b = r;
	}while(b != 0);
	
	cout << gcd << endl;
	return 0;
}