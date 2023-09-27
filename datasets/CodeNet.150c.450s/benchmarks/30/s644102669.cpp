#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void outStr(vector<int>& ary) {

	string aryStr = "";
	for (int i = 0; i < ary.size(); i++)
	{
		aryStr = aryStr + to_string(ary[i]);
		if (i < ary.size() - 1) aryStr = aryStr + " ";
	}

	cout << aryStr << endl;
	return;
}

int selectionSort(vector<int>& ary) {

	int swt = 0;
	for ( int i = 0; i < ary.size() ; i++)
	{
		int minj = i;
		bool needSw = false;
		for (int j = i; j < ary.size(); j++) {
			if (ary[j] < ary[minj]) {
				minj = j;
				needSw = true;
			}
		}
		if (needSw) {
			int sw = ary[i];
			ary[i] = ary[minj];
			ary[minj] = sw;

			swt++;
		}
	}

	return swt;
}


int main() {

	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int swt = selectionSort(A);
	outStr(A);

	cout << swt << endl;


	return 0;
}

