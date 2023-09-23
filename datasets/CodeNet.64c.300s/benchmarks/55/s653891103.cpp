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

	j = 1;

	while (true)
	{
		cin >> i;
		if (i == 0)
			break;
		cout << "Case " << j << ": " << i << endl;
		j++;
	}


	return 0;
}