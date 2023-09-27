#include<iostream>
using namespace std;

struct  card {
	char suit;
	int value;
};
void bubbleSort(card *A, int n)
{
	card t;
	for (int i = 0; i<n; i++)
		for (int j = n-1; j >= i + 1; j--)
		{
			if (A[j].value <A[j - 1].value)
			{
				t = A[j]; A[j] = A[j - 1]; A[j - 1] = t;
			}
		}
}

void selectSort(card *A, int n)
{
	card t;
	int i, j;
	for (i = 0; i<n; i++)
	{
		int mini = i;
		for (j = i; j<n; j++)
		{
			if (A[j].value<A[mini].value)
				mini = j;
		}
		t = A[i]; A[i] = A[mini]; A[mini] = t;
	}
}

bool cmp(card *A, card *B, int n)
{
	for (int i = 0; i< n; i++)
	{
		if (A[i].suit != B[i].suit) return false;
	}
	return true;
}



int main()
{
	card A[100], B[100];
	int n;
	cin >> n;

	//char suit;
	//int value;
	for (int i = 0; i< n; i++)
	{
		//cin >> suit >> value;
		//A[i].suit = suit;
		cin >> A[i].suit >> A[i].value;
		B[i] = A[i];
	}
	
	bubbleSort(A, n);
	selectSort(B, n);

	for (int i = 0; i < n; i++)
	{
		if (i) cout << " ";
		cout << A[i].suit << A[i].value;
	}
	cout << endl;
	cout << "Stable" << endl;


	for (int i = 0; i < n; i++)
	{
		if (i) cout << " ";
		cout << B[i].suit << B[i].value;
	}
	cout << endl;
	if(cmp(A,B,n))
		cout <<"Stable"<<endl;
	else
		cout << "Not stable"<<endl;

}