#include<iostream>
using namespace std;
int main() {
	int w, n;
	int l[30];
	int tmp;
	int a, b;
	char c;
	cin >> w >> n;
	for (int i = 0; i < w; i++){
		l[i] = i + 1;
	}
	for (int i = 0; i < n; i++){
		cin >> a >> c >> b;
		a -= 1;
		b -= 1;
		tmp = l[a];
		l[a] = l[b];
		l[b] = tmp;
	}
	for (int i = 0; i < w; i++){
		cout << l[i] << endl;
	}
	cin >> c;
}