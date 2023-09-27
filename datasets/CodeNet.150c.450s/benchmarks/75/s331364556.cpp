#include <iostream>

using namespace std;


void maxheapify(int [], int, int);
void build_heap(int heap[], int n);

int main()
{
	int n;
	cin >> n;
	int * heap = new int[n+1];
	
	for (int i = 1; i < n+1; i++)
	{
		cin >> heap[i];
	}
	
	build_heap(heap, n);
	
	for (int i = 1; i < n+1; i++)
	{
		cout << ' ' << heap[i];
	}
	cout << endl;
}


void maxheapify(int heap[], int n, int node)
{
	int max = node, l = 2 * node, r = 2 * node + 1;
	if (l <= n && heap[node] < heap[l])
		max = l;
	if (r <= n && heap[max] < heap[r])
		max = r;
	
	if (max != node)
	{
		swap(heap[node], heap[max]);
		maxheapify(heap, n, max);
	}
}


void build_heap(int heap[], int n)
{
	for (int i = n/2; i >= 1; i--)
		maxheapify(heap, n, i);
}




//自己设计的函数 
//void maxheapify(int heap[], int n, int node)
//{
//	int l = 2 * node, r = 2 * node + 1;
//	if (l > n || r > n) return;
//	if (l <= n)
//	{
//		maxheapify(heap, n, l);
//		if (heap[node] < heap[l])
//			swap(heap[node], heap[l]);
//	}
//	if (r <= n)
//	{
//		maxheapify(heap, n, r);
//		if (heap[node] < heap[r])
//			swap(heap[node], heap[r]);
//	}
//}
//
////自己设计的函数 
//void build_heap(int heap[], int n)
//{
//	for (int i = 1; i <= n/2; i++)
//		maxheapify(heap, n, i);
//}




//求最大值的编号 
//int max_index(int heap[], int n, int root);
//{
//	int max = root;
//	int l = 2 * root;
//	int r = 2 * root + 1;
//	if (l <=  n)
//	{
//		int index_maxl = max_index(heap, n, l);
//		if (heap[root] < heap[index_maxl]);
//		
//	}
//	if (r <=  n)
//	{
//		maxr = max_index(heap, n, l);
//		max = heap[max] < heap[maxr]?maxr:max;
//	}
//	return max;
//}

