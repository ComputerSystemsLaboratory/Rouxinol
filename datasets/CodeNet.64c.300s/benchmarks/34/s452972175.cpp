#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstdlib>
#include<iomanip>
#include<queue>
#include<set>
#include <valarray>
#include<stack>
#include<sstream>
#include<math.h>

using namespace std;

void insertionSort(int[], int);

void Solution()
{
	int n;
	int a[100] = {0};

	cin>>n;

	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	for(int i = 0; i < n - 1; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[n - 1]<<endl;

	insertionSort(a, n);
	
}

void insertionSort(int A[100], int N)
{
	int v = 0;

	for (int i = 1; i < N; i++)
	{
		v = A[i];

		int j = i - 1;

		while(j >= 0 && A[j] > v)
		{
			A[j + 1] = A[j];
			j--;
		}

		A[j + 1] = v;  // j = j -1

		for (int k = 0; k < N - 1; k++ )
		{
			cout<<A[k]<<" ";
		}

		cout<<A[N - 1]<<endl;
	}
}

int main()
{
	Solution();
	return 0;
}