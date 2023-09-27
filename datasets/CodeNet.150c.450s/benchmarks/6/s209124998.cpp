#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
#ifdef CIN
	ifstream cin("input.txt");
	ofstream cout("output.txt");
#endif

	int a, b, c;

	cin >> a >> b >> c;

	if (a < b && b < c) cout << "Yes" << endl;
	else cout << "No" << endl;



	return 0;
}