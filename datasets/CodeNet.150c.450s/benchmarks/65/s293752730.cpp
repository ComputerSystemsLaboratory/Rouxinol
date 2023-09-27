#include <iostream>
#include <vector>
#include <string>

using namespace std;

int ctoi(char ch)
{
	if ('0' <= ch && ch <= '9')
	{
		return (int)(ch - '0');
	}
	else
	{
		return -1;
	}
}

int N_in(string s)
{
	return ctoi(s[1]);
}

bool isStable(vector<string> after, vector<string> before)
{
	vector<char> a_suitseq;
	vector<char> b_suitseq;
	vector<int> countval(10, 0);
	for (int i = 0; i < after.size(); i++)
	{
		countval[N_in(after[i])]++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (countval[i] > 1)
		{
			a_suitseq.resize(4, '\0');
			b_suitseq.resize(4, '\0');
			for (int j = 0; j < after.size(); j++)
			{
				for (int k = 0; k < countval[i]; k++)
				{
					if (i == N_in(after[j]))
					{
						a_suitseq[k] = after[j][0];
					}
					if (i == N_in(before[j]))
					{
						b_suitseq[k] = before[j][0];
					}
				}
			}
			if (a_suitseq != b_suitseq)
			{
				return false;
			}
		}
	}
	return true;
}

vector<string> bubbleSort(vector<string> a)
{
	string tmp;
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = a.size() - 1; j > i; j--)
		{
			if (N_in(a[j - 1]) > N_in(a[j]))
			{
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}
	return a;
}

vector<string> selectionSort(vector<string> a)
{
	int min;
	string tmp;
	for (int i = 0; i < a.size(); i++)
	{
		min = i;
		for (int j = i; j < a.size(); j++)
		{
			if (N_in(a[j]) < N_in(a[min]))
			{
				min = j;
			}
		}
		if (min != i)
		{
			tmp = a[i];
			a[i] = a[min];
			a[min] = tmp;
		}
	}
	return a;
}

int main()
{
	int n;
	cin >> n;
	vector<string> a(n);
	vector<string> bubble(n);
	vector<string> selection(n);
	double tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	bubble = bubbleSort(a);
	selection = selectionSort(a);
	for (int i = 0; i < n; i++)
	{
		cout << bubble[i];
		if (i == n - 1)
		{
			cout << endl;
		}
		else
		{
			cout << " ";
		}
	}
	if (isStable(bubble, a))
	{
		cout << "Stable" << endl;
	}
	else
	{
		cout << "Not stable" << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << selection[i];
		if (i == n - 1)
		{
			cout << endl;
		}
		else
		{
			cout << " ";
		}
	}
	if (isStable(selection, a))
	{
		cout << "Stable" << endl;
	}
	else
	{
		cout << "Not stable" << endl;
	}
}
