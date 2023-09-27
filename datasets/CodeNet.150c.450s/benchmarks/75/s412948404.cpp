#include<bits/stdc++.h>

using namespace std;

vector<int> heap;

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		heap.push_back(t);
	}
	make_heap(heap.begin(),heap.end());
	for(int i=0;i<n;i++)
		printf(" %d",heap[i]);
	printf("\n");
	return 0;
}