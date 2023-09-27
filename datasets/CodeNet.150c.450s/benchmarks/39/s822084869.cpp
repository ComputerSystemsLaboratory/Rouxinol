#include<iostream>

using namespace std;

int main() {
	int tate, yoko;
	int menseki, shu;
	cin >> tate >> yoko;

	menseki = tate * yoko;
	shu = tate + tate + yoko + yoko;

	cout << menseki << " " << shu <<"\n";

	return 0;
}