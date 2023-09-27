#include <iostream>
#include <algorithm>

using namespace std;

struct Card
{
	int num;
	char type;	
};

void trace(int n, Card c[])
{
	for (int i = 0; i < n; ++i)
	{
		cout << c[i].type << c[i].num;
		if (i < n - 1)
		{
			cout << " ";
		}
	}
	cout << endl;
}

void bubbleSort(int n, Card c[])
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (c[j].num < c[j - 1].num)
			{
				swap(c[j], c[j - 1]);
			}
		}
	}
	return;
}

void selectionSort(int n, Card c[])
{
	int min = 0;
	for (int i = 0; i < n; ++i)
	{
		min = i;
		for (int j = i; j < n; ++j)
		{
			if (c[j].num < c[min].num)
			{
				min = j;
			}
		}
		if (i != min)
		{
			swap(c[i], c[min]);
		}
	}
	return;
}

int main(int argc, char const *argv[])
{
	int n = 0;
	cin >> n;
	Card c1[n], c2[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> c1[i].type >> c1[i].num;
		c2[i] = c1[i];
	}
	bubbleSort(n, c1);
	selectionSort(n, c2);
	trace(n, c1);
	cout << "Stable" << endl;
	trace(n, c2);
	for (int i = 0; i < n; ++i)
	{
		if (c1[i].type != c2[i].type)
		{
			cout << "Not stable" << endl;
			return 0;
		}
	}
	cout << "Stable" << endl;
	return 0;
}