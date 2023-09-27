#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>
using namespace std;
struct card {
	char ch;
	int num;
};
void SelectSort(card arr[], int n);
void BubbleSort(card arr[], int n)
{
	bool flag = true;
	for (int i = 0;flag && i < n - 1; ++i)
	{
		flag = false;
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (arr[j].num > arr[j + 1].num)
			{
				flag = true;
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void Print(card arr[], int N)
{
	for (int i = 0; i != N - 1; ++i)
		printf("%c%d ", arr[i].ch, arr[i].num);
	printf("%c%d\n", arr[N - 1].ch, arr[N - 1].num);
}
int main(void)
{
	int N;
	card arr[105], t[105];
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	cin >> N;
	
	for (int i = 0; i != N; ++i)
		scanf(" %c%d", &arr[i].ch, &arr[i].num);
	memcpy(t, arr, sizeof(card) * N);
	BubbleSort(t, N);
	Print(t, N);
	printf("Stable\n");
	SelectSort(arr, N);
	Print(arr, N);
	bool flag = true;
	for (int i = 0; i != N; ++i)
	{
		if (arr[i].ch != t[i].ch)
		{
			flag = false;
			break;
		}
	}
	if (!flag)
		printf("Not stable\n");
	else
		printf("Stable\n");
	//system("pause");
	return 0;
}

void SelectSort(card arr[], int n)
{
	int min_idx, min_value;
	for (int i = 0; i < n - 1; ++i)
	{
		min_idx = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[min_idx].num > arr[j].num)
			{
				min_idx = j;
			}
		}
		if (min_idx != i)
		{
			swap(arr[i], arr[min_idx]);
		}
	}
}