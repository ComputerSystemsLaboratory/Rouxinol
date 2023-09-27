#include <iostream>
#include <stdio.h>
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

int Rectangle(){
	int a, b, area, perimeter;

	cin >> a >>b;
	if (1 <= a && b <= 100){
		area = a*b;
		perimeter = (a + b) * 2;
		cout << area << " " << perimeter << endl;
		return 0;
	}
	return 1;
}

int Watch(){
	int S;
	cin >> S;
	
	
	int D = 60;
	int s = S%D;
	int m = (S / D) % D;
	int h = (S / D) / D;
	if (0 <= S && S <= 86400){
		printf("%u:%u:%u\n", h, m, s);
		return 0;
	}
	
	return 1;
}

int SmallLargeOrEqual(){
	int a, b;
	cin >> a >> b;
	if (!(a <= a && b <= 1000)) return 1;
	if (a < b)		cout << "a < b" << endl;
	else if (a > b) cout << "a > b" << endl;
	else			cout << "a == b" << endl;
	return 0;
}


int main(){
	//HelloWorld();
	//XCubic();
	//Rectangle();
	//Watch();
	SmallLargeOrEqual();
	return 0;
}