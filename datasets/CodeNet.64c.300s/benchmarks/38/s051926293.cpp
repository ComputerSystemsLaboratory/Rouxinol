#include <cstdio>
#include <iostream>
using namespace std;
int ans = 0;
void judge(int a[], int aa, int b,int  c) {
	if (aa == 10)ans = 1;
	if (a[aa] > b) {
		if (a[aa] > c)
		{
			judge(a, aa + 1, a[aa], c);
			judge(a, aa + 1, b, a[aa]);
		}
		judge(a, aa + 1, a[aa], c);
	}
	else if (a[aa] > c)judge(a, aa + 1, b, a[aa]);
}
int main() {
	int n;
	int a[10] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		ans = 0;
		for (int j = 0; j < 10; j++) {
			cin >> a[j];
		}
		judge(a, 0, 0, 0);
		if (ans == 1)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	}