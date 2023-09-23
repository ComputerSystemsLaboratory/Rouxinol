#include <iostream>
using namespace std;

int gcd(int x, int y){
	if(x > y){
		if(x%y == 0) return y;
		else return gcd(x%y, y);
	}
	else if(x < y){
		if(y%x == 0) return x;
		else return gcd(x, y%x);
	}
	else return x;
}

int main(){
	int x, y;

	cin >> x >> y;

	cout << gcd(x,y) << endl;

	return 0;
}