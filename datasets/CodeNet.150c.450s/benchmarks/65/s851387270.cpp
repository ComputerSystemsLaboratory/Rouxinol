#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct Card {
	char alpha,
		number;
};
void printCard(Card card[],int N,string stable)
{
	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			cout << card[i].alpha << card[i].number << flush;
		}else if (i == N - 1)
		{
			cout << " " << card[i].alpha << card[i].number << endl;
		}else
		{
			cout << " " << card[i].alpha << card[i].number << flush;
		}
	}

	cout<< stable<<endl;
}
void stableSort()
{
	
	const int MAX = 36;
	Card forBubble[MAX];
	Card forSelection[MAX];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> forBubble[i].alpha >> forBubble[i].number;
	}

	for (int i = 0; i < N; i++)
	{
		forSelection[i].alpha = forBubble[i].alpha;
		forSelection[i].number = forBubble[i].number;
	}
	//bubble
	for (int i = N - 1; i >= 0;i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (forBubble[j].number > forBubble[j + 1].number)
			{
				Card temp = forBubble[j];
				forBubble[j] = forBubble[j + 1];
				forBubble[j + 1] = temp;
			}
		}
	}

	//selection
	for (int i = 0; i < N; i++)
	{
		int k = i;
		for (int j = i + 1; j < N; j++)
		{
			if (forSelection[k].number > forSelection[j].number)
			{
				k = j;
			}
		}

		if (i != k)
		{
			Card temp = forSelection[i];
			forSelection[i] = forSelection[k];
			forSelection[k] = temp;
		}
	}

	string stable = "Stable";

	printCard(forBubble, N,stable);
	//equls
	for (int i = 0; i < N; i++)
	{
		if (forBubble[i].alpha == forSelection[i].alpha && forBubble[i].number == forSelection[i].number)continue;

		stable = "Not stable";
	}

	printCard(forSelection, N, stable);

	

}

int main()
{
	//maximumProfit();
	//insertionSort();
	//bubbleSort();
	//selectionSort();
	stableSort();
	return 0;
}