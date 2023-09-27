#include <set>
#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int N; string S1, S2;

	cin >> N;

	set<string> dictionary;

	for (int i = 0; i < N; i++)
	{
		cin >> S1 >> S2;

		if (S1[0] == 'i')
		{
			dictionary.insert(S2);
		}
		else
		{
			if (dictionary.find(S2) != dictionary.end())
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
	}

	return 0;
}