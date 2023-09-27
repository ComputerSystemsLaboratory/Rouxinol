#include <iostream>
#include <vector>
#include <string>

using namespace std;

void BubbleSort(int n, string *bnums) {
	
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			
			if (bnums[j].at(1) < bnums[j - 1].at(1)) {
				string tmp = bnums[j];
				bnums[j] = bnums[j - 1];
				bnums[j - 1] = tmp;
			}
			
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << bnums[i];
		if (i != n - 1) cout << " ";
		else cout << endl;

	}
	cout << "Stable" << endl;

}

void SelectionSort(int n, string *bnums, string *snums) {
	bool FLAG = false;
	for (int i = 0; i < n - 1; i++)
	{
		int mini = i;

		for (int j = i + 1; j < n; j++)
			if (snums[j].at(1) < snums[mini].at(1)) mini = j;
		
		if (mini != i) {
			string tmp = snums[i];
			snums[i] = snums[mini];
			snums[mini] = tmp;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << snums[i];
		if (i != n - 1) cout << " ";
		else cout << endl;

		if (bnums[i] != snums[i]) FLAG = true;
	}

	if (FLAG) cout << "Not stable" << endl;
	else cout << "Stable" << endl;

}


int main() {
	int n;
	string	*bnums, *snums;

	cin >> n;

	bnums = new string[n];
	snums = new string[n];

	for (int i = 0; i < n; i++) {
		cin >> bnums[i];
		snums[i] = bnums[i];
	}

	BubbleSort(n, bnums);
	SelectionSort(n, bnums, snums);

	return 0;
}