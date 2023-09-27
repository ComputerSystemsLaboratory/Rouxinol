#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	//ifstream fin("ALDS1_1_C_in1.txt");

	int n;
	cin >> n;
	cin.ignore();

	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		v.push_back(t);
	}

	int count = 0;
	for (int i = 0; i < v.size(); i++)
	{
		bool isPrime = true;
		for (int j = 2; j <= sqrt(v[i]); j++)
		{
			if (v[i] % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime == true)
			count++;
	}
	cout << count << endl;

	return 0;
}