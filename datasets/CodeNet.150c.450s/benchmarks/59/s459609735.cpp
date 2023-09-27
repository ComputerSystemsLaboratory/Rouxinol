// ALDS1_1_A Insertion sort

#include <vector>
#include <iostream>

using namespace std;

namespace alds1_1_a {

	void outputArray(ostream& os, const vector<int>& A)
	{
		int n = A.size();
		for (int i = 0; i < n - 1; ++i) {
			os << A[i] << " ";
		}
		os << A[n - 1] << endl;
	}

	void insertionSort(vector<int>& A, ostream& os)
	{
		int n = A.size();

		for (int i = 0; i < n; ++i) {
			int key = A[i];
			int j = i - 1;
			while (j >= 0 && A[j] > key) {
				if (A[j] > key)
					A[j + 1] = A[j];
				--j;
			}
			A[j + 1] = key;

			outputArray(os, A);
		}
	}

	void solve(istream &sin, ostream &sout)
	{
		int n;
		sin >> n;

		vector<int> A;
		for (int i = 0; i < n; ++i) {
			int val;
			sin >> val;
			A.push_back(val);
		}

		insertionSort(A, sout);
	}
}

int main()
{
	alds1_1_a::solve(cin, cout);
}
