#include<iostream>
#include<cstdio>
#include<algorithm>
#define Lens 2000005

using namespace std;
int N, h = 0;;
int A[Lens];
char com[20];

int parent(int i)
{
	return i / 2;
}
int lc(int i)
{
	return 2 * i;
}
int rc(int i)
{
	return 2 * i + 1;
}
void changeheapify(int i)
{
	int p = parent(i);
	if (p > 0)
	{
		if (A[i] > A[p])
		{
			swap(A[i], A[p]);
			changeheapify(p);
		}
	}
}
void Insert(int k)
{
	h++;
	A[h] = k;
	changeheapify(h);
}



void maxheapify(int i)
{
	int l = lc(i);
	int r = rc(i);
	int largest=i;
	if (A[l] > A[i] && l <= h)
		largest = l;
	if (A[r] > A[largest]&&r<=h)
		largest = r;
	if (largest != i)
	{
		swap(A[i], A[largest]);
		maxheapify(largest);
	}
}


int Delete()
{
	int tmp = A[1];
	A[1] = A[h];
	A[h] = 0;
	h--;
	maxheapify(1);
	return tmp;
}

int main()
{
	int k;
	while (cin >> com)
	{
		if (com[0]== 'i')
		{
			cin >> k;
			Insert(k);
		}
		else if (com[0] == 'e'&&com[1]=='x')
		{
			int tmp = Delete();
			cout << tmp<<endl;
		}
		else if (com[0]=='e'&&com[1]=='n')
			break;
	}
	return 0;
}

