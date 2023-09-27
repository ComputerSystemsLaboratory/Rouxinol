#include "math.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <functional>
#include <numeric>
#include <cmath>
using namespace std;

int t;
const int N = 10001;
int arr[N];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < N; i++)
	{
		arr[i] = 0;
	}
	for (int x = 1; x < 101; x++)
	{

		for (int y = 1; y <101; y++)
		{
			for (int z = 1; z <101; z++)
			{
				long long s = x * x + y * y + z * z + x * y + x * z + y * z;
				if (s < N) arr[s - 1] ++;
			}

		}
	}
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
