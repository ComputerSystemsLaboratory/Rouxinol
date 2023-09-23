#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
#ifdef CIN
	ifstream cin("input.txt");
	ofstream cout("output.txt");
#endif

	int a, b;
	int x, y;

	cin >> a >> b;

	x = 2 * a + 2 * b;
	y = a * b;

	cout << y << " " << x << endl;


	return 0;
}