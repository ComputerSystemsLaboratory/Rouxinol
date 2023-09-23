#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
#ifdef CIN
	ifstream cin("input.txt");
	ofstream cout("output.txt");
#endif

	int x, y;

	cin >> x;

	y = x*x*x;

	cout << y <<endl;

	return 0;
}