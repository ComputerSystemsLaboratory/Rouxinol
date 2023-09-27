#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void outStr(vector<int>& ary) {

	string aryStr = "";
	for (int i = 0; i < ary.size() ; i++)
	{
		aryStr = aryStr + to_string(ary[i]);
		if (i < ary.size() - 1) aryStr = aryStr + " ";
	}

	cout << aryStr << endl;
	return;
}

int main() {

	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	outStr(A);

	int v = 0;; int j = 0;
	for (int i = 1; i < N;i++) {
		v = A[i];
		j = i - 1;

		while (j >= 0 && A[j] > v)
		{
			A[j + 1] = A[j];
			j--;
			
		}
		A[j + 1] = v;

		outStr(A);
	}

	return 0;
}

