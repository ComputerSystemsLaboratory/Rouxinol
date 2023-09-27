#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
#ifdef CIN
	ifstream cin("input.txt");
	ofstream cout("output.txt");
#endif

	int i, j;


	while (true)
	{

		cin >> i >> j;

		if (i == 0 && j == 0)
			break;

		if (i > j)
			i ^= j ^= i ^= j;
		cout << i<< " " << j << endl;


	}


	return 0;
}