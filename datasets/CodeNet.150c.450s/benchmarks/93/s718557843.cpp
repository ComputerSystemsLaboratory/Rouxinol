#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 100005;
struct Card
{
	char suit;
	int value;
	friend bool operator<(const Card& a, const Card& b)
	{
		return a.value < b.value;
	}
} card[N], t[N];
int partition(Card arr[], int p, int r)	//[p, r)????????????,????????????pivot??????
{
	int pivot = arr[r - 1].value;
	int i = p;
	for (int j = p; j < r - 1; ++j)
	{
		if (arr[j].value <= pivot)
		{
			swap(arr[i++], arr[j]);
		}
	}
	swap(arr[i], arr[r - 1]);
	return i;
}

void q_sort(Card arr[], int l, int r)
{
	if (l + 1 < r)
	{
		int t = partition(arr, l, r);
		q_sort(arr, l, t);
		q_sort(arr, t, r);
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> card[i].suit >> card[i].value;
	memcpy(t, card, sizeof(Card) * n);
	q_sort(card, 0, n);
	stable_sort(t, t + n);
	bool flag = true;
	for (int i = 0; i < n; ++i)
	{
		if (card[i].suit != t[i].suit)
		{
			flag = false;
			break;
		}
	}
	if (flag)
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;

	for (int i = 0; i < n; ++i)
		cout << card[i].suit << ' ' << card[i].value << endl;

	return 0;
}