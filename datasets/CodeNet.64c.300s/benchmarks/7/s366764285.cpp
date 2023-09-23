#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
//#include <map>
#include <iomanip>
#include <vector>

using namespace std;



int main()
{
	int n;
	char egara;
	int rank;
	bool S[14] = {false};
	bool H[14] = {false};
	bool C[14] = {false};
	bool D[14] = {false};
	
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> egara >> rank;
		if (egara == 'S')
		{
			S[rank] = true;
		} else if (egara == 'H') {
			H[rank] = true;
		} else if (egara == 'C') {
			C[rank] = true;
		} else if (egara == 'D') {
			D[rank] = true;
		}
	}
	
	for (int i=1; i<=13; i++)
	{
		if (S[i] == false)
		{
			cout << "S " << i << endl;
		}
	}
	for (int i=1; i<=13; i++)
	{
		if (H[i] == false)
		{
			cout << "H " << i << endl;
		}
	}
	for (int i=1; i<=13; i++)
	{
		if (C[i] == false)
		{
			cout << "C " << i << endl;
		}
	}
	for (int i=1; i<=13; i++)
	{
		if (D[i] == false)
		{
			cout << "D " << i << endl;
		}
	}
	
	return 0;
}