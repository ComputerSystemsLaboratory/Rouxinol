#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

class cSort
{
public:
	void sort( int* arr, int len )
	{
		int mi, mx, z = 0; findMinMax( arr, len, mi, mx );
		int nlen = ( mx - mi ) + 1; int* temp = new int[nlen];
		memset( temp, 0, nlen * sizeof( int ) );

		for( int i = 0; i < len; i++ ) temp[arr[i] - mi]++;

		for( int i = mi; i <= mx; i++ )
		{
			while( temp[i - mi] )
			{
				arr[z++] = i;
				temp[i - mi]--;
			}
		}

		delete [] temp;
	}

private:
	void findMinMax( int* arr, int len, int& mi, int& mx )
	{
		mi = INT_MAX; mx = 0;
		for( int i = 0; i < len; i++ )
		{
			if( arr[i] > mx ) mx = arr[i];
			if( arr[i] < mi ) mi = arr[i];
		}
	}
};

void printv(int v[], int len) {
	int ifs = 1;
	for (int i = 0; i < len; i++) {
		if (ifs == 0)
			cout << " ";
		cout << v[i];
		ifs = 0;
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	int *A = new int[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];
	cSort s; s.sort(A, n);
	printv(A, n);
	return 0;
}