#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

struct Card
{
	char symbol;
	int number;
};


void BubbleSort(Card*, int);
void SelectionSort(Card*, int);
void ShowData(Card *, int);
bool isStable(Card*, Card*, int);


int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	Card c1[n], c2[n];

	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;

		c1[i].symbol = str.at(0);
		c1[i].number = (int)(str.at(1) - '0');
		c2[i].symbol = str.at(0);
		c2[i].number = (int)(str.at(1) - '0');	
	}

	BubbleSort(c1, n);
	SelectionSort(c2, n);

	ShowData(c1, n);
	printf("Stable\n");
	ShowData(c2, n);
	if (isStable(c1, c2, n)) printf("Stable\n"); else printf("Not stable\n");

	return 0;
}


void BubbleSort(Card *card, int n)
{
	Card temp;
	for (int i = 0; i < n; ++i)
	{
		for (int j = n - 1; j >= i + 1; --j)
		{
			if(card[j].number < card[j-1].number)
			{
				temp = card[j];
				card[j] = card[j-1];
				card[j-1] = temp;
			}
		}
	}
}


void SelectionSort(Card *card, int n)
{
	int min;
	for (int i = 0; i < n; ++i)
	{
		// i は配列の中の未ソート部分の先頭を表す
		min = i;
		for (int j = i; j < n; ++j)
		{
			if(card[j].number < card[min].number)
			{
				min = j;
			}
		}
		Card temp = card[min];
		card[min] = card[i];
		card[i] = temp;
	}
}


void ShowData(Card *card, int n)
{
	for (int k = 0; k < n; ++k)
	{
		if (k == n- 1)
		{
			printf("%c%d\n", card[k].symbol, card[k].number);
		}
		else
		{
			printf("%c%d ", card[k].symbol, card[k].number);
		}
	}
}

bool isStable(Card *card1, Card *card2, int n)
{
	for (int i = 0; i < n; ++i)
	{
		if(card1[i].symbol != card2[i].symbol) return false;
	}
	return true;
}