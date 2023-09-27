#include <iterator>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

struct Deck
{
	struct Card *card;
	int num;
};

struct Card
{
	char suit;
	int val;
	bool operator<=(const Card &another)
	{
		return val <= another.val;
	}
};

template <typename T> void swap(T *a, T *b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int partition(Deck A, int p, int r)
{
	Card x = A.card[r];
	int i = p - 1;
	for (int j = p; j < r; j++)
	{
		if (A.card[j] <= x)
		{
			i = i + 1;
			swap(A.card[i], A.card[j]);
		}
	}
	swap(A.card[i + 1], A.card[r]);
	return i + 1;
}

void quickSort(Deck &A, int p, int r)
{
	int q;
	if (p < r)
	{
		q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

bool isStable(Deck d_after, Deck d_before)
{
	vector<char> a_suitseq;
	vector<char> b_suitseq;
	map<int, int> countval;
	for (int i = 0; i < d_after.num; i++)
	{
		if (countval.find(d_after.card[i].val) != countval.end())
		{
			countval[d_after.card[i].val]++;
		}
		else
		{
			countval[d_after.card[i].val] = 1;
		}
	}
	for (map<int, int>::iterator itr = countval.begin(); itr != countval.end(); itr++)
	{
		int i = countval.at(itr->first);
		if (i > 1)
		{
			a_suitseq.resize(4, '\0');
			b_suitseq.resize(4, '\0');
			for (int j = 0; j < d_after.num; j++)
			{
				for (int k = 0; k < i; k++)
				{
					if (itr->first == d_after.card[j].val)
					{
						a_suitseq[k] = d_after.card[j].suit;
					}
					if (itr->first == d_before.card[j].val)
					{
						b_suitseq[k] = d_before.card[j].suit;;
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

int main()
{
	int n;
	cin >> n;
	Deck deck, deck_org;
	deck.card = new Card[n];
	deck_org.card = new Card[n];
	deck_org.num = deck.num = n;
	for (int i = 0; i < n; i++)
	{
		cin >> deck.card[i].suit >> deck.card[i].val;
		deck_org.card[i].suit = deck.card[i].suit;
		deck_org.card[i].val = deck.card[i].val;
	}
	quickSort(deck, 0, n - 1);
	if (isStable(deck, deck_org))
	{
		cout << "Stable" << endl;
	}
	else
	{
		cout << "Not stable" << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << deck.card[i].suit << ' ' << deck.card[i].val << endl;
	}
	delete deck.card;
	delete deck_org.card;
	return 0;
}
