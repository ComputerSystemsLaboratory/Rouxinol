#include<iostream>
using namespace std;

int H, N[5000000];

void MaxHeap(int i)
{
	int l = 2 * i;
	int r = l + 1;
	int largest = i;
	int temp;

	if (l <= H && N[l] > N[largest])   //---------
		largest = l;

	if (r <= H && N[r] > N[largest])
		largest = r;

	if (largest != i)
	{
		temp = N[i];
		N[i] = N[largest];
		N[largest] = temp;

		MaxHeap(largest);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> H;
	for (int i = 1; i <= H; i++)
		cin >> N[i];

	for (int i = H / 2; i >= 1; i--)
		MaxHeap(i);
	
	for (int i = 1; i <= H; i++)
		cout << " " << N[i];

	cout << endl;
	return 0;
}
