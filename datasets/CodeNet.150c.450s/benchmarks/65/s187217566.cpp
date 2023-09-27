#include <iostream>
using namespace std;

struct foo {
	int num;
	char c;
};

int main(){
	int n;
	foo a[100], b[100];
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i].c >> a[i].num,b[i] = a[i];
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; i < j; j--) {
			foo tmp = a[j];
			if (a[j].num < a[j - 1].num)a[j] = a[j - 1], a[j - 1] = tmp;
		}
	}
	for (int i = 0; i < n - 1; i++)cout << a[i].c << a[i].num << " ";
	cout << a[n - 1].c << a[n - 1].num << endl << "Stable" << endl;

	for (int i = 0; i < n; i++) {
		int minj = i;
		for (int j = i; j < n; j++) {
			if(b[minj].num > b[j].num)minj = j;
		}
		foo tmp = b[minj];
		b[minj] = b[i];
		b[i] = tmp;
	}
	int same;
	for (int i = 0; i < n - 1; i++)cout << b[i].c << b[i].num << " ";
	cout << b[n - 1].c << b[n - 1].num << endl;
	for (int i = 0; i < n && a[i].c == b[i].c; i++)same = i;
	if (same >= n - 1)cout << "Stable" << endl;
	else cout << "Not stable" << endl;

	return 0;
}