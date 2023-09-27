#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
#ifdef CIN
	ifstream cin("input.txt");
	ofstream cout("output.txt");
#endif

	int a,b,c;
	int i, j;

	j = 0;

	cin >> a >> b >> c;

	for (int i = a; i <= b; i++)
	{
		if (c % i == 0) j++;
	}

	cout << j << endl;


	return 0;
}