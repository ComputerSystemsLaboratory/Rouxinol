#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
	int t;
	t = x;
	x = y;
	y = t;
}
int main()
{
	int N; //????´???°
	int num = 0; //?????????????????°
	cin >> N;
	int* x = new int[N + 1];
	for (int i = 0; i < N; i++) {
		cin >> x[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j > i; j--) {
			if (x[j] < x[j - 1]) {
				swap(x[j], x[j - 1]);
				num++;
			}

		}
	}
	for (int i = 0; i < N-1; i++) {
		cout << x[i] << " ";
	}
	cout << x[N-1] << "\n";

	cout << num << "\n";
	return 0;
}