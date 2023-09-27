#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
#define MAX 2000000
#define INFTY 2000000001
int T[MAX + 1];
int size;
void maxheap(int i)
{
	int l, r, max_k;
	l = i * 2;
	r = l + 1;
	if (r <= ::size)
	{
		max_k = max({ T[i],T[l],T[r] });
		if (max_k == T[l])
		{
			swap(T[i], T[l]);
			maxheap(l);
		}
		else if (max_k == T[r])
		{
			swap(T[i], T[r]);
			maxheap(r);
		}
	}
	else if (l == ::size)
	{
		if (T[l] > T[i])swap(T[l], T[i]);
		maxheap(l);
	}
}

void heapIncreaseKey(int i, int k)
{
	if (k < T[i])return;

	T[i] = k;
	int l = i;
	int p = l / 2;
	while (l > 1 && T[p] < T[l])
	{
		swap(T[p], T[l]);
		l = p;
		p = l / 2;
	}
}

void insert(int key)
{
	::size++;
	T[::size] = -INFTY;
	heapIncreaseKey(::size, key);
}

int heapExtractMax()
{
	if (::size < 1)return -1;
	int max = T[1];
	T[1] = T[::size];
	::size--;
	maxheap(1);
	return max;
}

int main()
{
	::size = 0;
	char str[10];
	while (1)
	{
		scanf("%s", &str);
		if (str[0] == 'i')
		{
			int k;
			scanf("%d", &k);
			insert(k);
		}
		else
		{
			if (str[1] == 'x')
			{
				printf("%d\n", heapExtractMax());
			}
			else
			{
				break;
			}
		}
	}
	return 0;
}