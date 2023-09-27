// ALDS1_2_A Bubble Sort

#include <iostream>
#include <vector>

using namespace std;

namespace alds1_2_a
{
	void bubbleSort(vector<int> &A, int &swapCount)
	{
		swapCount = 0;
		int n = A.size();
		
		for (int i = 0; i < n; ++i) {
			for (int j = n - 1; j > i; --j) {
				if (A[j - 1] > A[j]) {
					int temp = A[j];
					A[j] = A[j - 1];
					A[j - 1] = temp;

					++swapCount;
				}
			}
		}
	}

	void solve(istream &sin, ostream &sout)
	{
		int n;
		sin >> n;

		int buf;
		vector<int> A;
		for (int i = 0; i < n; ++i) {
			sin >> buf;
			A.push_back(buf);
		}

		int swapCount;
		bubbleSort(A, swapCount);

		for (int i = 0; i < n - 1; ++i) {
			sout << A[i] << " ";
		}
		sout << A[n - 1] << endl << swapCount << endl;
	}
}

int main()
{
	alds1_2_a::solve(cin, cout);
}
