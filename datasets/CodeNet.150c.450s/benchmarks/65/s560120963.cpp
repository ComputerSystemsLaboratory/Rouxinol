#include<iostream>
#include<memory.h>
using namespace std;
/*
bool insertSort(char R[36][3], int N)
{
	bool isStable = true;
	for (int i = 1; i < N; i++)
	{
		char v[3];
		memcpy(v, &R[i][0], sizeof(v));
		
		int j = i - 1;
		while ((j >= 0) && (R[j][1] > v[1]))
		{
			memcpy(R[j + 1], R[j], sizeof(R[0]));
			j--;
		}
		memcpy(R[j + 1], v, sizeof(v));
		if (R[j + 2][1] == v[1])
		{
			isStable = false;
		}
	}
	return isStable;
}
*/
bool bubbleSort(char R[36][3], int N)
{
	bool isStable = true;

	for (int i = 0; i < (N - 1); i++)
	{
		for (int j = N - 1; j > i; j--)
		{
			if (R[j - 1][1] > R[j][1])
			{
				char temp[3];
				memcpy(temp, R[j], sizeof(temp));
				memcpy(R[j], R[j - 1], sizeof(R[0]));
				memcpy(R[j - 1], temp, sizeof(R[0]));
			}
		}
	}
	return isStable;
}

bool selectionSort(char R[36][3], int N)
{
	bool isStable = true;

	for (int i = 0; i < N - 1; i++)
	{
		int minPos = i;
		for (int j = i + 1; j < N; j++)
		{
			if (R[minPos][1] > R[j][1])
			{
				minPos = j;
			}
		}
		if (i != minPos) {
			swap(R[i], R[minPos]);
		}
	}
	return isStable;
}

void traceData(char R[36][3], int N, bool isStable)
{
	for (int i = 0; i < N - 1; i++)
	{
		cout << R[i] << " ";
	}
	cout << R[N - 1] << endl;
	if (isStable)
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
	char CARD1[36][3];
	char CARD2[36][3];
	int N;
	bool isStable;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> CARD1[i];
	}
	memcpy(CARD2, CARD1, sizeof(CARD2));

	isStable = bubbleSort(CARD2, N);
	traceData(CARD2, N, isStable);

	isStable = selectionSort(CARD1, N);
	for (int i = 0; i < N; i++)
	{
		if (strcmp(CARD1[i], CARD2[i]) != 0) isStable = false;
	}
	traceData(CARD1, N, isStable);

	return 0;
}