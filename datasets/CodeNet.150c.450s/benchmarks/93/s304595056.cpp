#include <iostream>

using namespace std;

#define MAX 100000

struct Card
{
	char suit;
	int value;
};

Card quickCards[MAX];
Card mergeCards[MAX];
Card lCards[MAX / 2 + 2];
Card rCards[MAX / 2 + 2];
Card infinity;

int Partition(Card cards[], int p, int r)
{
	Card temp;
	Card x = cards[r];
	int i = p - 1;
	for (int j = p; j < r; ++j)
	{
		if (cards[j].value <= x.value)
		{
			++i;
			temp = cards[i];
			cards[i] = cards[j];
			cards[j] = temp;
		}
	}

	temp = cards[i + 1];
	cards[i + 1] = x;
	cards[r] = temp;

	return i + 1;
}

void QuickSort(Card cards[], int p, int r)
{
	if (p < r)
	{
		int q = Partition(cards, p, r);
		QuickSort(cards, p, q - 1);
		QuickSort(cards, q + 1, r);
	}
}

void Merge(Card cards[], int l, int m, int r)
{
	int ll = m - l;
	int rl = r - m;
	for (int i = 0; i < ll; ++i)
		lCards[i] = cards[l + i];
	for (int i = 0; i < rl; ++i)
		rCards[i] = cards[m + i];
	lCards[ll] = infinity;
	rCards[rl] = infinity;

	int i = 0;
	int j = 0;
	for (int k = l; k < r; ++k)
	{
		if (lCards[i].value <= rCards[j].value)
			cards[k] = lCards[i++];
		else
			cards[k] = rCards[j++];
	}
}

void MergeSort(Card cards[], int l, int r)
{
	if (l + 1 < r)
	{
		int m = (l + r) >> 1;
		MergeSort(cards, l, m);
		MergeSort(cards, m, r);
		Merge(cards, l, m, r);
	}
}

bool IsStable(Card quickCards[], Card mergeCards[], int n)
{
	bool bIsStable = true;
	for (int i = 0; i < n; ++i)
	{
		if (quickCards[i].suit != mergeCards[i].suit
			|| quickCards[i].value != mergeCards[i].value)
		{
			bIsStable = false;
			break;
		}
	}

	return bIsStable;
}

int main()
{
	infinity.value = 2000000000;

	int n; cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> quickCards[i].suit >> quickCards[i].value;
		mergeCards[i].suit = quickCards[i].suit;
		mergeCards[i].value = quickCards[i].value;
	}
	//cout << "--------" << endl;
	MergeSort(mergeCards, 0, n);
	//for (int i = 0; i < n; ++i)
	//	cout << mergeCards[i].suit << " " << mergeCards[i].value << endl;
	//cout << "--------" << endl;
	QuickSort(quickCards, 0, n - 1);

	if (IsStable(quickCards, mergeCards, n))
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;
	for (int i = 0; i < n; ++i)
		cout << quickCards[i].suit << " " << quickCards[i].value << endl;
	
	return 0;
}
