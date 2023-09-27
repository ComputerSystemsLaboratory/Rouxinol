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


int bubbleSort(vector<int>& ary) {

	bool flag = 1;
	int swTime = 0;
	while (flag)
	{
		flag = 0;
		for (int j = ary.size() - 1; j >= 1; j--)
		{
			if (ary[j] < ary[j - 1]) {
				int sw = ary[j - 1];
				ary[j - 1] = ary[j];
				ary[j] = sw;
				flag = 1;

				swTime++;
			}

		}
	}

	return swTime;
}

int main() {

	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int swt = bubbleSort(A);
	outStr(A);

	cout << swt << endl;


	return 0;
}

