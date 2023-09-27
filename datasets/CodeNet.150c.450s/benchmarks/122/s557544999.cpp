#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAX 2000000
#define INFTY (1<<30)

int H=1, A[MAX+1];

void maxHeapify(int j)
{
	int largest;
	if(A[j]<A[j*2]&&(j*2<=H))
	{
		largest=j*2;
	}
	else 
		largest=j;
	if(A[largest]<A[j*2+1]&&((j*2+1)<=H))
		largest = j*2+1;
	if(largest!=j)
	{
		swap(A[largest], A[j]);
		maxHeapify(largest);
	}
}

int extractMax()
{
	int max = A[1];
	if(H<1) return -INFTY;
	A[1]=A[H--];
	maxHeapify(1);
	return max;	
}

void increaseKey(int i, int key)
{
	if(key<A[i])
		return;
	A[i]=key;
	while(i>1&&A[i/2]<A[i])
	{
		swap(A[i], A[i/2]);
		i=i/2;
	}
}

void insert(int key)
{
	H++;
	A[H]=-INFTY;
	increaseKey(H, key);
}

int main()
{
	int key, i=0, j;
	char com[10];
	while(1)
	{
		scanf("%s", com);
		if(com[0]=='e'&&com[1]=='n') break;
			
		if(com[0]=='i')
		{
			scanf("%d", &key);
			insert(key);
		}
		else if(com[0]=='e'&&com[1]=='x')
		{
			printf("%d\n", extractMax());
		}
	}
	return 0;
}
