#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <math.h>


using namespace std;

int n,k,w[100000] = {0};

bool search(int p)
{
	int track[100000] = {0},j = 0;

	for(int i = 0; i < n; i++)
	{
		if (track[j] + w[i] > p)
		{
			if (j == k-1)
			{
				return false;
			}

			j++;
			track[j] += w[i];
		}else
		{
			track[j] += w[i];
		}
	}

	return true;
}

int main()
{
	int max,left,right,center = 0,sum = 0;

	cin >> n >> k;

	max = 0;

	for(int i = 0; i < n; i++)
	{
		cin >> w[i];
		sum += w[i];
		if (max < w[i])
		{
			max = w[i];
		}
	}

	left = max;
	right = sum;

	while(left < right)
	{
		center = (left + right) / 2;
		//cout << "center=" << center << endl;

		if (search(center))
		{
			right = center;
		}else
		{
			left = center+1;
		}
	}

	cout << left << endl;

	return 0;
}
	