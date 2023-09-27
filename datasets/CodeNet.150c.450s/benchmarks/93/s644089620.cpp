#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

struct card
{
	int num;
	char suit;
	int order;
};

int partition(card *A,int p,int r)
{
	int j;
	card x,temp;

	x = A[r];
	j = p-1;

	for(int i = p; i < r; i++)
	{
		if (A[i].num <= x.num)
		{
			j++;
			temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	}

	temp = A[j+1];
	A[j+1] = A[r];
	A[r] = temp;

	return j+1;
}

void quicksort(card *A,int p,int r)
{
	int q;

	if (p < r)
	{
		q = partition(A,p,r);
		quicksort(A,p,q-1);
		quicksort(A,q+1,r);
	}
}



int main()
{
	bool check = true;
	int n;
	card A[100000],B[100000];

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf(" %c %d", &A[i].suit,&A[i].num);
		A[i].order = i;
	}

	quicksort(A,0,n-1);

	for(int i = 1; i < n; i++)
	{
		if (A[i].num == A[i-1].num)
		{
			int j = 0;

			while(A[i-1].num == A[i+j].num)
			{
				if (A[i-1].order > A[i+j].order)
				{
					check = false;
					break;
				}
				j++;
			}
		}

		if (!check)
		{
			break;
		}
	}

	if (check)
	{
		printf("Stable\n");
	}else
	{
		printf("Not stable\n");
	}

	for(int i = 0; i < n; i++)
	{
		printf("%c %d\n", A[i].suit, A[i].num);
	}



	return 0;
}
	