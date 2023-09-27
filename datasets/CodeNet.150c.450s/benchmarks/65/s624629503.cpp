#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void outStr(vector<string>& ary) {

	string aryStr = "";
	for (int i = 0; i < ary.size(); i++)
	{
		aryStr = aryStr + ary[i];
		if (i < ary.size() - 1) aryStr = aryStr + " ";
	}

	cout << aryStr << endl;
	return;
}

bool isSmaller(string s1, string s2) {

	int v1 = stoi(s1.substr(1));
	int v2 = stoi(s2.substr(1));

	bool rtn = false;
	if (v1 < v2) rtn = true;

	return rtn;
}

void bubbleSort(vector<string>& ary) {

	bool flag = 1;
	int swTime = 0;
	while (flag)
	{
		flag = 0;
		for (int j = ary.size() - 1; j >= 1; j--)
		{
			if (isSmaller(ary[j], ary[j - 1])) {
				string sw = ary[j - 1];
				ary[j - 1] = ary[j];
				ary[j] = sw;
				flag = 1;

			}

		}
	}

	return;
}

void selectionSort(vector<string>& ary) {

	for (int i = 0; i < ary.size(); i++)
	{
		int minj = i;
		bool needSw = false;
		for (int j = i; j < ary.size(); j++) {
			if (isSmaller(ary[j], ary[minj])) {
				minj = j;
				needSw = true;
			}
		}
		if (needSw) {
			string sw = ary[i];
			ary[i] = ary[minj];
			ary[minj] = sw;

		}
	}

	return;
}



int main() {

	int N;
	cin >> N;
	vector<string> bb(N);
	vector<string> ss;
	for (int i = 0; i < N; i++) {
		cin >> bb[i];
		ss.push_back(bb[i]);
	}

	bubbleSort(bb);
	outStr(bb);

	string stb = "Stable";
	cout << stb << endl;

	selectionSort(ss);
	outStr(ss);

	bool isSame = true;
	for (int i = 0; i < bb.size(); i++)
	{
		if (bb[i] != ss[i]) isSame = false;
	}

	if (!isSame) stb = "Not stable";

	cout << stb << endl;


	return 0;
}

