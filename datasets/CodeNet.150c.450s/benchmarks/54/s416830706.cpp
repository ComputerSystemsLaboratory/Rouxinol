#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string W;

	string T;

	int count = 0;

	cin >> W;

	for (int i = 0; i < W.size(); i++)
	{
		if ('A' <= W[i] && W[i] <= 'Z')
		{
			W[i] += 32;
		}
	}

	while (1)
	{
		cin >> T;

		if (T == "END_OF_TEXT")break;

		for (int j = 0; j < T.size();j++)
		{
			if('A'<=T[j]&&T[j]<='Z')
			{
				T[j] += 32;
			}
		}

		if (T.size()==W.size()&&T.find(W) != string::npos)
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}