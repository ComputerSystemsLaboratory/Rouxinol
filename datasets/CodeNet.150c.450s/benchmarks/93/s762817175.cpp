#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

#define MAX 100000
typedef pair<char, int> paCard;
paCard A[MAX], B[MAX];


int Partition(int nLeft, int nRight)
{
	int x = A[nRight].second;
	int nIndex = nLeft - 1;
	for (int i = nLeft; i < nRight; i++) // here it is nRight 
	{
		if (A[i].second <= x)
		{
			++nIndex;
			swap(A[i], A[nIndex]);
		}
	}
	nIndex++;
	swap(A[nIndex], A[nRight]);
	return nIndex;
}


void quick_sort(int nLeft, int nRight)
{
	int nMid = 0;
	if (nLeft < nRight)
	{
		nMid = Partition(nLeft, nRight);
		quick_sort(nLeft, nMid - 1);
		quick_sort(nMid + 1, nRight);
	}
}


int main()
{
	int nIn;
	cin >> nIn;
	for (int i = 0; i < nIn; ++i)
	{
		cin >> A[i].first >> A[i].second;
		B[i] = A[i];
	}
	stable_sort(B, B + nIn, [](const paCard& A, const paCard& B) { return A.second < B.second; });
	quick_sort(0, nIn - 1);
	bool bFlag = true;
	for (int i = 0; i < nIn; ++i)
	{
		if (A[i] != B[i])
		{
			bFlag = false;
			break;
		}
	}
	cout << (bFlag ? "Stable" : "Not stable") << endl;
	for_each(A, A + nIn, [](const paCard& A) { cout << A.first << " " << A.second << endl; });
	return 0;

}
