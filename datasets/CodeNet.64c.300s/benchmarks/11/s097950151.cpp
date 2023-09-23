#include<iostream>
using namespace std;

int main () {
	int S;
	int a;
	int b;
	cin >> S;
	a = S/3600;
	b = (S-a*3600)/60;
	cout << a << ":" << b << ":" << S-a*3600-b*60 << endl;
	return 0;
}
