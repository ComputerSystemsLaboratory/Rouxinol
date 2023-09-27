#include <iostream>
using namespace std;

int H, A[5000000];

int left(int i)
{
	return i * 2;
}

int right(int i)
{
	return i * 2 + 1;
}

void maxHeapify(int i)
{
	int l, r, largest;
	l = left(i);
	r = right(i);

	if (l <= H && A[l] > A[i]) largest = l;
	else largest = i;

	if (r <= H && A[r] > A[largest]) largest = r;

	if (largest != i) 
	{
		swap(A[i], A[largest]);
		maxHeapify(largest);
	}
}

int main(void)
{
	cin >> H;

	for (int i = 1; i <= H; i++) cin >> A[i];
	for (int i = H / 2; i >= 1; i--) maxHeapify(i);
	for (int i = 1; i <= H; i++) cout << " " << A[i];
	cout << endl;

	return 0;
}