#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;
typedef pair<char, int> P;

void bubbleSort(vector<P>& vec)
{
	for (int i = 0; i < vec.size() - 1; ++i)
	{
		for (int j = vec.size() - 1; j > i; --j)
		{
			if (vec[j].second < vec[j - 1].second)
			{
				P temp = vec[j];
				vec[j] = vec[j - 1];
				vec[j - 1] = temp;
			}
		}
	}
}

void selectionSort(vector<P>& vec)
{
	for (int i = 0; i < vec.size(); ++i)
	{
		int minj = i;
		for (int j = i; j < vec.size(); ++j)
		{
			if (vec[j].second < vec[minj].second)
			{
				minj = j;
			}
		}
		P temp = vec[i];
		vec[i] = vec[minj];
		vec[minj] = temp;
	}
}

void solve()
{
	int n;
	cin >> n;
	vector<P> vec;
	for (int i = 0; i < n; ++i)
	{
		P p;
		cin >> p.first >> p.second;
		vec.push_back(p);
	}
	vector<P> bubbleVec = vec;
	vector<P> selectionVec = vec;
	bubbleSort(bubbleVec);
	selectionSort(selectionVec);

	string bubbleResult = "";
	for (int i = 0; i < bubbleVec.size() - 1; ++i)
	{
		cout << bubbleVec[i].first << bubbleVec[i].second << " ";
		bubbleResult += bubbleVec[i].first;
		bubbleResult += bubbleVec[i].second + '0';
	}
	cout << bubbleVec[bubbleVec.size() - 1].first << bubbleVec[bubbleVec.size() - 1].second << endl;
	bubbleResult += bubbleVec[bubbleVec.size() - 1].first;
	bubbleResult += bubbleVec[bubbleVec.size() - 1].second + '0';
	cout << "Stable" << endl;
	
	string selectionResult = "";
	for (int i = 0; i < selectionVec.size() - 1; ++i)
	{
		cout << selectionVec[i].first << selectionVec[i].second << " ";
		selectionResult += selectionVec[i].first;
		selectionResult += selectionVec[i].second + '0';
	}
	cout << selectionVec[selectionVec.size() - 1].first << selectionVec[selectionVec.size() - 1].second << endl;
	selectionResult += selectionVec[selectionVec.size() - 1].first;
	selectionResult += selectionVec[selectionVec.size() - 1].second + '0';
	if (bubbleResult == selectionResult)
	{
		cout << "Stable" << endl;
	}
	else
	{
		cout << "Not stable" << endl;
	}
}

int main()
{
	solve();
	return(0);
}