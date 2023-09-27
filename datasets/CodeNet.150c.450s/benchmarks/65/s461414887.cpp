#include <iostream>
using namespace std;

struct Card{int num; char suit;};

void bubbleSort(Card c[], int N);
void selectionSort(Card c[], int N);
void swap(Card& x, Card& y);
void showArray(Card c[], int N);
bool Stable(Card x[], Card y[], int N);

int main()
{
	int N;
	Card c1[36], c2[36];
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> c1[i].suit >> c1[i].num;
		c2[i] = c1[i];
	}

	bubbleSort(c1, N);
	cout << "Stable" << endl;
	selectionSort(c2, N);
	if(Stable(c1, c2, N))
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;
	return 0;
}

void bubbleSort(Card c[], int N)
{
	for(int i = 0; i < N; i++)
		for(int j = N-1; j>i; j--)
			if(c[j].num < c[j-1].num)
				swap(c[j], c[j-1]);
	showArray(c, N);
}

void selectionSort(Card c[], int N)
{
	int min;
	for(int i = 0; i<N; i++)
	{
		min = i;
		for(int j = i; j < N; j++)
			if(c[j].num<c[min].num)
				min = j;
		swap(c[i], c[min]);
	}
	showArray(c, N);
}

void swap(Card& x, Card& y)
{
	Card temp = x;
	x = y;
	y = temp;
}

void showArray(Card c[], int N)
{
	cout<<c[0].suit << c[0].num;
	for(int i = 1; i < N; i++)
		cout<<' '<< c[i].suit << c[i].num;
	cout<<endl;
}

bool Stable(Card x[], Card y[], int N)
{
	for(int i = 0; i < N; i++)
		if(x[i].suit != y[i].suit)
			return false;
	return true;
}