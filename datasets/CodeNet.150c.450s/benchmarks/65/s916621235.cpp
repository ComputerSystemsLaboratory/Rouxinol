#include <iostream>
using namespace std;
typedef struct Card{
	char suit;
	int value;
}Card;
void bubblesort(Card c[], int n)
{
	int flag = 1;
	while(flag)
	{
		flag = 0;
		for (int i = n-1; i >= 1; --i)
		{
			if(c[i].value < c[i-1].value)
			{
				Card temp = c[i];
				c[i] = c[i-1];
				c[i-1] = temp;
				flag =1;
			}

		}
	}
}

void selectionsort(Card c[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		int minj = i;
		for (int j = i; j < n; ++j)
		{
			if(c[j].value < c[minj].value) minj = j;
		}
		if(minj != i)
		{
			Card temp = c[i];
			c[i] = c[minj];
			c[minj] = temp;
		}
	}

}

bool isstable(Card c1[], Card c2[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		if(c1[i].value==c2[i].value && c1[i].suit!=c2[i].suit) return false;
	}
	return true;
}

void print(Card c[], int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		cout<<c[i].suit<<c[i].value<<" ";
	}
	cout<<c[n-1].suit<<c[n-1].value<<endl;
}
int main()
{
	int n;
	cin>>n;
	Card c1[36], c2[36];
	for (int i = 0; i < n; ++i)
	{
		cin>>c1[i].suit>>c1[i].value;
	}
	for (int i = 0; i < n; ++i)
	{
		c2[i] = c1[i];
	}

	bubblesort(c1, n);
	selectionsort(c2, n);

	print(c1,n);
	cout<<"Stable"<<endl;

	
	print(c2,n);
	if(isstable(c1,c2,n)) cout<<"Stable"<<endl;
	else cout<<"Not stable"<<endl;

	return 0;
}