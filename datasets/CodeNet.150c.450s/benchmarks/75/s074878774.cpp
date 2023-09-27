#include <stdio.h>
#include <iostream>
using namespace std;

int getRightIndex(int i);
int getLeftIndex(int i);
void maxHeapify(int a[], int i);
void buildMaxHeap(int a[]);

int H;

int main(void)
{
	cin >> H;
	int *a = new int[H];
	for (int i = 0; i < H; i++) cin >> a[i];

	buildMaxHeap(a);

	for (int i = 0; i < H; i++) cout << " " << a[i];
	cout << endl;

	return 0;
}

int getRightIndex(int i)
{
	return (i + 1) * 2;
}

int getLeftIndex(int i)
{
	return getRightIndex(i) - 1;
}

void maxHeapify(int a[], int i)
{
	int l = getLeftIndex(i);
	int r = getRightIndex(i);
	int largest = i;

	if (l < H && a[l] > a[largest]) largest = l;
	if (r < H && a[r] > a[largest]) largest = r;
	
	if (largest != i) {
		swap(a[i], a[largest]);
		maxHeapify(a, largest);
	}
}

void buildMaxHeap(int a[])
{
	for (int i = (H + 1) / 2 - 1; i >= 0; i--) maxHeapify(a, i);
}