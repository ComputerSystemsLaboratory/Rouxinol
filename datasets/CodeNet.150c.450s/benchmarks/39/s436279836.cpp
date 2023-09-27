#include<iostream>
using namespace std;

int a, b;

int Equivalent(int width, int height){
	int S = width * height;
	return S;
}

int Perimeter(int width, int height){
	int L = 2 * ( width + height );
	return L;
}

int main(void){
	cin >> a >> b;
	cout << Equivalent(a, b) << " " << Perimeter(a, b) << endl;
	return 0;
}