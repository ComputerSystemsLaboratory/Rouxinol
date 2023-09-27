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

	cin >> a >> b;

	if (a > b) cout << "a > b" << endl;
	else if (a == b) cout << "a == b" << endl;
	else cout << "a < b" << endl;


	return 0;
}