#include<iostream>
using namespace std;

struct Card
{
	char suit;
	char value;
};

bool bubbleSort(Card C[], int N)
{
	bool isStable = true;

	for (int i = 0; i < (N - 1); i++)
	{
		for (int j = N - 1; j > i; j--)
		{
			if (C[j - 1].value > C[j].value)
			{
				swap(C[j - 1], C[j]);
			}
		}
	}
	return isStable;
}

void selectionSort(Card C[], int N)
{

	for (int i = 0; i < N - 1; i++)
	{
		int minPos = i;
		for (int j = i + 1; j < N; j++)
		{
			if (C[minPos].value > C[j].value)
			{
				minPos = j;
			}
		}
		if (i != minPos) {
			swap(C[i], C[minPos]);
		}
	}
}

void traceData(Card C[], int N)
{
	int i;
	for (i = 0; i < N - 1; i++)
	{
		cout << C[i].suit << C[i].value << " ";
	}
	cout << C[i].suit << C[i].value << endl;
}

bool isStable(Card C1[], Card C2[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if (C1[i].suit != C2[i].suit) return false;
	}
	return true;
}

int main()
{
	Card C1[36], C2[36];
	int N;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> C1[i].suit >> C1[i].value;
		C2[i] = C1[i];
	}

	bubbleSort(C1, N);
	traceData(C1, N);
	cout << "Stable" << endl;

	selectionSort(C2, N);
	traceData(C2, N);
	if (isStable(C2, C1, N) == true)
	{
		cout << "Stable" << endl;
	}
	else
	{
		cout << "Not stable" << endl;
	}

	return 0;
}