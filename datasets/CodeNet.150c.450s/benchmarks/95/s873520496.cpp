#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int N;
	while (cin >> N && N != 0)
	{
		char f[3];
		char preF[3] = { 'a', 'a', '\0' };
		int right = 0;
		int left = 0;
		int count = 0;

		for (int i = 0; i < N; i++)
		{
			cin >> f;
			if (strcmp(f, "lu") == 0)
			{
				if (right == 1 && strcmp(preF, "ld") != 0)count++;
				strcpy(preF, f);
				left = 1;
			}
			else if (strcmp(f, "ru") == 0)
			{
				if (left == 1 && strcmp(preF, "rd") != 0)count++;
				strcpy(preF, f);
				right = 1;
			}
			else if (strcmp(f, "ld") == 0)
			{
				if (right == 0 && strcmp(preF, "lu") != 0)count++;
				strcpy(preF, f);
				left = 0;
			}
			else if (strcmp(f, "rd") == 0)
			{
				if (left == 0 && strcmp(preF, "ru") != 0)count++;
				strcpy(preF, f);
				right = 0;
			}
		}

		cout << count << endl;
	}

	return 0;
}