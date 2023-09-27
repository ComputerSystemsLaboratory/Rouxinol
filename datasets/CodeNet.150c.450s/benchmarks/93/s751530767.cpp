#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

#define MAX_LEN 1000000

using namespace std;

void printArray1(int *data, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d", data[i]);
		if (i != len - 1) printf(" ");
	}
	printf("\n");
}

void printArray2(int *data, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", data[i]);
	}
}

void swap(int *a, int i, int j)
{
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

struct Card
{
	int n;
	char c;
};

void printArray(Card *cards, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%c", cards[i].c);
		printf(" ");
		printf("%d", cards[i].n);
		printf("\n");
	}

}

void swap(Card *cards, int i, int j)
{
	Card temp;
	temp = cards[i];
	cards[i] = cards[j];
	cards[j] = temp;
}

int compare(Card c1, Card c2)
{
	if (c1.n < c2.n)
	{
		return -1;
	}
	else if (c1.n == c2.n)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

bool isSame(Card *cards1, Card *cards2, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (cards1[i].n != cards2[i].n)return false;
		if (cards1[i].c != cards2[i].c)return false;
	}
	return true;
}

void BubbleSort(Card *cards, int len, int(*compare)(Card, Card))
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = len - 1; j > i; j--)
		{
			if (compare(cards[j - 1], cards[j]) > 0)
			{
				swap(cards, j - 1, j);
			}
		}
	}
}

void SelectionSort(Card *cards, int len, int(*compare)(Card, Card))
{
	for (int i = 0; i < len - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < len; j++)
		{
			if (compare(cards[j], cards[min]) < 0)
			{
				min = j;
			}
		}
		swap(cards, i, min);
	}
}

int g[MAX_LEN];
int m = 0;
int cnt = 0;

void insertSort(int *data, int len, int g)
{
	for (int i = g; i < len; i++)
	{
		int v = data[i];
		int j = i;
		while (j >= g && data[j - g] > v)
		{
			data[j] = data[j - g];
			j -= g;
			cnt++;
		}
		data[j] = v;
	}
}

void shellSort(int *data, int len)
{
	int v;
	for (v = 1; v * 3 + 1 < len; v = 3 * v + 1);
	for (int i = 0; i < len && v > 0; i++, v /= 3)
	{
		g[i] = v;
		m++;
	}
	for (int i = 0; i < m; i++)
	{
		insertSort(data, len, g[i]);
	}
}

Card cards1[MAX_LEN];
Card cards2[MAX_LEN];

Card temp_l[MAX_LEN / 2 + 2];
Card temp_r[MAX_LEN / 2 + 2];

void mergeSort(Card *data, int begin, int end)
{
	if (begin >= end)return;
	int middle = (begin + end) / 2;
	mergeSort(data, begin, middle);
	mergeSort(data, middle + 1, end);

	int n1 = middle - begin + 1;
	int n2 = end - (middle + 1) + 1;
	for (int i = 0; i < n1; i++)
	{
		temp_l[i] = data[begin + i];
	}
	for (int i = 0; i < n2; i++)
	{
		temp_r[i] = data[middle + 1 + i];
	}

	Card sentinel;
	sentinel.n = 2000000000;
	sentinel.c = 'a';
	temp_l[n1] = sentinel;
	temp_r[n2] = sentinel;

	int i = 0;
	int j = 0;
	for (int k = begin; k <= end; k++)
	{
		if (compare(temp_l[i], temp_r[j]) <= 0)
		{
			data[k] = temp_l[i];
			i++;
		}
		else
		{
			data[k] = temp_r[j];
			j++;
		}
	}
}

#define MAX_LENGTH 100000

int input[MAX_LENGTH];

int partition(Card *input, int begin, int end)
{
	Card v = input[end];
	int i = begin - 1;
	for (int j = begin; j <= end - 1; j++)
	{
		if (compare(input[j], v) <= 0)
		{
			i++;
			swap(input, i, j);
		}
	}
	swap(input, i + 1, end);
	return i + 1;
}

void quickSort(Card *input, int begin, int end)
{
	if (begin < end)
	{
		int q = partition(input, begin, end);
		quickSort(input, begin, q - 1);
		quickSort(input, q + 1, end);
	}
}

int main()
{

	int len;
	scanf("%d", &len);

	for (int i = 0; i < len; i++)
	{
		int n;
		char c;
		std::cin >> c >> n;
		cards1[i].n = n;
		cards1[i].c = c;
		cards2[i].n = n;
		cards2[i].c = c;
	}
	quickSort(cards1, 0, len - 1);
	mergeSort(cards2, 0, len - 1);
	if (isSame(cards1, cards2, len))
	{
		printf("Stable\n");
	}
	else
	{
		printf("Not stable\n");
	}
	printArray(cards1, len);
}
