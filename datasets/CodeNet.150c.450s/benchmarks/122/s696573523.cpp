#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
#include<list>
#define _USE_MATH_DEFINES

#include<math.h>
#include<map>

#define SENTINEL 1000000001

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

long long int A[2000010];
int itr;

void Insert(long long int key)
{
	itr++;
	A[itr] = key;

	int temp = itr;

	while (temp != 1)
	{
		if (A[temp / 2] < A[temp])
		{
			long long int t = A[temp];
			A[temp] = A[temp / 2];
			A[temp / 2] = t;
		}
		else
		{
			break;
		}
		temp = temp / 2;
	}
}

int ExtractMax()
{
	long long int maxNum = A[1];

	A[1] = A[itr];
	itr--;

	if (itr == 0)
	{
		return maxNum;
	}

	int temp = 1;
	while (true)
	{
		int l = temp * 2;
		int r = temp * 2 + 1;
		long long int tmk = A[temp];
		if (l <= itr)
		{
			tmk = max(tmk, A[l]);
		}
		if (r <= itr)
		{
			tmk = max(tmk, A[r]);
		}
		if (tmk == A[temp])
		{
			break;
		}
		else if (tmk == A[l])
		{
			long long int t = A[l];
			A[l] = A[temp];
			A[temp] = t;
			temp = l;
		}
		else
		{
			long long int t = A[r];
			A[r] = A[temp];
			A[temp] = t;
			temp = r;
		}
	}

	/*for (int i = 1; i <= itr; i++)
	{
		printf(" %d", A[i]);
	}
	printf("\n");
	*/
	return maxNum;
}

int main()
{
	while (true)
	{
		string command;
		long long int key;
		cin >> command;

		switch (command[2])
		{
		case 's':
			cin >> key;
			Insert(key);
			break;
		case 't':
			cout << ExtractMax() << endl;
			break;
		case 'd':
			goto END;
			break;
		}
	}
	END:
	return 0;
}
