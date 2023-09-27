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

	int mini;
	for (int i = 0; i < N; i++) {
		mini = i;
		for (int j = i+1; j < N;j++) {
			if (x[j] < x[mini]) {
				mini = j;
				
			}
			
		}
		if (i != mini) {
			swap(x[i], x[mini]);
			num++;
		}
	}
	for (int i = 0; i < N - 1; i++) {
		cout << x[i] << " ";
	}
	cout << x[N - 1] << "\n";

	cout << num << "\n";
	return 0;
}