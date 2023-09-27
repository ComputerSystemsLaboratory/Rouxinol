#include <iostream>
using namespace std;
typedef struct
{
	char suit;
	char value;
} Card;
void bubbleSort(Card* a,int n)
{
	int i=0,j;
	Card temp;
	bool flag = true;
	while(flag)
	{
		flag = false;
		for(j=n-1; j>=i+1; j--)
		{
			if(a[j].value<a[j-1].value)
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				flag = true;
			}
		}
		i++;
	}
}
void selectionSort(Card* a,int n)
{
	int i,j;
	Card temp;
	int minj;
	for(i=0; i<n; i++)
	{
		minj=i;
		for(j=i; j<n; j++)
		{
			if(a[j].value<a[minj].value)
			{
				minj=j;
			}
		}
		temp=a[i];
		a[i]=a[minj];
		a[minj]=temp;
	}
}
bool isStable(Card* c1,Card* c2,int n)
{
	for(int i=0; i<n; i++)
	{
		if(c1[i].suit!=c2[i].suit)
		{
			return false;
		}
	}
	return true;
}
void printArr(Card* a,int n)
{
	for(int i=0;i<n;i++)
	{
		if(i>0) cout << " ";
		cout << a[i].suit << a[i].value;
	}
	cout << endl;
}
int main()
{
	int n;
	cin >> n;
	Card c1[n],c2[n];
	for(int i=0; i<n; i++)
	{
		cin >> c1[i].suit >> c1[i].value;
		c2[i]=c1[i];
	}
	bubbleSort(c1,n);
	selectionSort(c2,n);
	printArr(c1,n);
	cout << "Stable" << endl;
	printArr(c2,n);
	bool flag = isStable(c1,c2,n);
	if(flag)
	{
		cout << "Stable" <<endl;
	}
	else
	{
		cout << "Not stable" << endl;
	}
	return 0;
}