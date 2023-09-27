#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int w, n;
	int a[31];
	cin >> w >> n;
	for (int i = 1; i <= w; i++){
		a[i] = i;
	}
	int x, y;
	char t;
	for (int i = 0; i < n; i++){
		cin >> x >> t >> y;
		swap(a[x], a[y]);
	}
	for (int i = 1; i <= w; i++){
		cout << a[i] << endl;
	}
}