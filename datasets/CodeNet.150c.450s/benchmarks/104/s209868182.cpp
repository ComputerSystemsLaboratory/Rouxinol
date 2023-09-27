#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
#include <ctype.h>
#include <cstdlib>
#include <string.h>
#include <cmath>
#include <cstdio>





using namespace std;

int main()
{
	int w, n, a, b;
	char comma;
	vector<int> vec;

	cin >> w;
	cin >> n;

	for (int i = 1; i <= w; i++)
	{
		vec.push_back(i);
	}

	for (int i = 0; i < n; i++)
	{
		cin >> a >> comma >> b;
		
		swap(vec[a - 1], vec[b - 1]);
	}

	for (auto a : vec)
	{
		cout << a << endl;
	}


	return 0;
}