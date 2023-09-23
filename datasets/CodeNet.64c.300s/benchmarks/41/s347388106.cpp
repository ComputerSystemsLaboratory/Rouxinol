#include <iostream>

using namespace std;

void maxHeapify(int tree[],int num,int H)
{
	int l = num*2+1;
	int r = num*2+2;
	int largest;

	if(l<H && tree[l]>tree[num])
	{
		largest = l;
	}
	else
	{
		largest = num;
	}
	if(r<H && tree[r]>tree[largest])
	{
		largest = r;
	}
	if(largest!=num)
	{
		int c = tree[num];
		tree[num] = tree[largest];
		tree[largest] = c;
		maxHeapify(tree,largest,H);
	}
	return;
}

void buildMaxHeap(int tree[],int H)
{
	for(int i=H/2; i>=0; i--)
	{
		maxHeapify(tree,i,H);
	}
	return;
}

int main(void)
{
	int H;
	cin >> H;
	int tree[H];

	for(int i=0;i<H;i++)
	{
		cin >> tree[i];
	}

	buildMaxHeap(tree,H);

	for(int i=0;i<H;i++)
	{
		cout << " " << tree[i];
	}
	cout << endl;

	return 0;
}