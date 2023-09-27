#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a[100], n, min,temp=0;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];
	for (int i = 0; i < n; i++) {
		min = i;
		for (int j = i; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		if (i != min) {
			swap(a[i], a[min]);
			temp++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i != n - 1)cout << " ";
	}
	cout <<endl << temp << endl;
}