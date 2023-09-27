#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int H;
	cin >> H;
	vector<int> heap(H);
	for (int i = 0; i < H; ++i)
	{
		cin >> heap[i];
	}
	for (int i = 0; i < H; ++i)
	{
		cout << "node " << i + 1 << ": key = " << heap[i] << ", ";
		if ((i - 1) / 2.0 >= 0)
		{
			cout << "parent key = " << heap[(i - 1) / 2] << ", ";
		}
		if (i * 2 + 1 < H)
		{
			cout << "left key = " << heap[i * 2 + 1] << ", ";
		}
		if (i * 2 + 2 < H)
		{
			cout << "right key = " << heap[i * 2 + 2] << ", ";
		}
		cout << endl;
	}
}

int main()
{
	solve();
	return(0);
}