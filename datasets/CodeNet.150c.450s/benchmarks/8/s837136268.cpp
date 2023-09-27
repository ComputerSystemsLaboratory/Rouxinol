#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <stdio.h>
#include <sstream>


using namespace std;
void swap(int &a, int &b);

int main()
{
	int n;
	cin >> n;

	string sTaro, sHanako;
	int Tscore = 0, Hscore = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> sTaro;
		cin >> sHanako;

		if (sTaro > sHanako)
			Tscore += 3;
		else if (sHanako > sTaro)
			Hscore += 3;
		else
		{
			Tscore += 1;
			Hscore += 1;
		}

	}
	cout << Tscore << " " << Hscore << endl;

	return 0;
}



