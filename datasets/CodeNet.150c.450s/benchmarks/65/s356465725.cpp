#include "bits/stdc++.h"
using namespace std;

string bubbleSort(vector<char> &Mb,vector<int> &Nb, int A);
string selectionSort(vector<char> &Ms,vector<int> &Ns, int A);

int main(void) {
	
	int A;
	cin >> A;

	vector<char> M(A), Mb(A), Ms(A);
	vector<int> N(A), Nb(A), Ns(A);
	for (int i = 0; i < A; i++) cin >> M.at(i) >> N.at(i);

	for (int i = 0; i < A; i++)
	{
		Mb.at(i) = M.at(i);
		Ms.at(i) = M.at(i);
		Nb.at(i) = N.at(i);
		Ns.at(i) = N.at(i);
	}

	string YN = bubbleSort(Mb, Nb, A);
	for (int i = 0; i < A; i++)
	{
		if (i) cout << " ";
		cout << Mb.at(i) << Nb.at(i);
	}
	cout << endl;
	cout << YN << endl;

	YN = selectionSort(Ms, Ns, A);
	for (int i = 0; i < A; i++)
	{
		if (i) cout << " ";
		cout << Ms.at(i) << Ns.at(i);
	}
	cout << endl;
	cout << YN << endl;

	return 0;
}


string bubbleSort(vector<char> &Mb, vector<int> &Nb, int A) 
{
	vector<int> Ib(A);
	for (int i = 0; i < A; i++) Ib.at(i) = i;

	for (int i = 0; i < A-1; i++)
	{
		for (int j = A-1; i < j; j--)
		{
			if (Nb.at(j) < Nb.at(j - 1)) {
				swap(Nb.at(j), Nb.at(j - 1));
				swap(Mb.at(j), Mb.at(j - 1));
				swap(Ib.at(j), Ib.at(j - 1));
			}
		}
	}

	for (int i = 0; i < A-1; i++)
	{
		if (Nb.at(i) == Nb.at(i + 1))
		{
			if (Ib.at(i) > Ib.at(i + 1))
			{
				return "Not stable";
			}
		}
	}

	return "Stable";
}

string selectionSort(vector<char>& Ms, vector<int>& Ns, int A)
{
	vector<int> Is(A);
	for (int i = 0; i < A; i++) Is.at(i) = i;

	for (int i = 0; i < A - 1; i++)
	{
		int minN = i;
		for (int j = i + 1; j < A; j++)
		{
			if (Ns.at(j) < Ns.at(minN))
			{
				minN = j;
			}
		}

		if (minN != i)
		{
			swap(Ms.at(i), Ms.at(minN));
			swap(Ns.at(i), Ns.at(minN));
			swap(Is.at(i), Is.at(minN));
		}
	}

	for (int i = 0; i < A-1; i++)
	{
		if (Ns.at(i) == Ns.at(i + 1))
		{
			if (Is.at(i) > Is.at(i + 1))
			{
				return "Not stable";
			}
		}
	}

	return "Stable";

}
