#include <iostream>
using namespace std;

int HelloWorld(){
	cout << "Hello World" << endl;
	return 0;
}

int XCubic(){
	int x;
	cin >> x;
	if (1 <= x && x <= 100){
		x = x*x*x;
		cout << x << endl;
		return 0;
	}
	return 1;
}

int main(){
	//HelloWorld();
	XCubic();
	return 0;
}