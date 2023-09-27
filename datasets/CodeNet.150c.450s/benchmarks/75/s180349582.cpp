#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

vector<int> Heap;

void insert(int node)
{
	Heap.push_back(node);
}

void Max_Heapify(int node)
{
	int l = node * 2;
	int r = node * 2 + 1;

	int largest;

	if (l < Heap.size())
	{
		if (Heap[node] < Heap[l])
		{
			largest = l;
		}
		else
		{
			largest = node;
		}
	}
	else
	{
		largest = node;
	}

	if (r < Heap.size())
	{
		if (Heap[largest] < Heap[r])
		{
			largest = r;
		}
	}

	if (largest != node)
	{
		swap(Heap[largest], Heap[node]);

		Max_Heapify(largest);
	}
}

int main()
{
	int N; scanf("%d", &N); Heap.push_back(0);

	int tmp;

	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &tmp);

		insert(tmp);
	}

	for (int i = N / 2; i >= 1; i--)
	{
		Max_Heapify(i);
	}

	for (int i = 1; i <= N; i++)
	{
		printf(" %d", Heap[i]);
	}

	printf("\n");
	
	return 0;
}