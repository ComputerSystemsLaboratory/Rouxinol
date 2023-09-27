#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <algorithm>

using namespace std;
typedef vector< pair<char, int> > Trump;

namespace {
	void BubbleSort(Trump& t, int N)
	{
		bool flag = true;
		while (flag)
		{
			flag = false;
			for (int i = N - 1; i > 0; --i)
				if (t[i].second < t[i - 1].second)
					swap(t[i], t[i - 1]), flag = true;
		}
	}

	void SelectionSort(Trump& t, int N)
	{
		for (int i = 0; i < N; ++i)
		{
			int min = i;
			for (int j = i; j < N; ++j)
				if (t[j].second < t[min].second)
					min = j;

			if (i != min)
				swap(t[i], t[min]);
		}
	}
}

int main()
{
	int N;
	cin >> N;
	cin.ignore();

	string s;
	getline(cin, s);

	istringstream is(s);
	Trump t;
	for (int i = 0; i < N; ++i)
	{
		is >> s;
		t.push_back(pair<char, int>(s[0], s[1] - '0'));
	}

	Trump bt = t;
	BubbleSort(bt, N); // stable

	for (int i = 0; i < N; ++i)
	{
		cout << bt[i].first << bt[i].second;
		i < N - 1 ? cout << " " : cout << endl;
	}
	cout << "Stable" << endl;

	Trump st = t;
	SelectionSort(st, N); // Not stable
	bool isStable = true;
	for (int i = 0; i < N; ++i)
		if (st[i] != bt[i])
			isStable = false;

	for (int i = 0; i < N; ++i)
	{
		cout << st[i].first << st[i].second;
		i < N - 1 ? cout << " " : cout << endl;
	}
	cout << (isStable ? "Stable" : "Not stable") << endl;

	return 0;
}