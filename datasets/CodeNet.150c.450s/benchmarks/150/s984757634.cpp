#define MAX_VALUE 10000

#include<iostream>

using namespace std;

int main() {
	int n;
	int backet[MAX_VALUE + 1] = { 0 };
	cin >> n;
	int* a = new int[n];
	int work;
	for (int i = 0;i < n;i++) {
		cin >> work;
		backet[work]++;
	}
	int count = 0;
	for (int i = 0;i <= MAX_VALUE;i++) {
		for (int j = 0;j < backet[i];j++) {
			a[count] = i;
			count++;
		}
	}
	for (int i = 0;i < n - 1;i++) {
		cout << a[i] << " ";
	}
	cout << a[n - 1] << endl;
	

}
