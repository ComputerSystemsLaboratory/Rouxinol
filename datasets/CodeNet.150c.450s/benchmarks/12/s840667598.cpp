#include<iostream>
using namespace std;

int H, N[3000];

void print()
{
	for (int i = 1; i <= H; i++)
	{
		cout << "node " << i << ": " << "key = " << N[i] << ", ";
		if (i / 2 >= 1)
			cout << "parent key = " << N[i / 2] << ", ";
		if (i * 2 <= H)
			cout << "left key = " << N[i * 2] << ", ";
		if (i * 2 + 1 <= H)
			cout << "right key = " << N[i * 2 + 1] << ", ";

		cout << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> H;

	for (int i = 1; i <= H; i++)
		cin >> N[i];

	print();

	return 0;
}
