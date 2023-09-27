#include <bits/stdc++.h>
#include <vector>
using namespace std;
int a[100000], w, n, x, y, h, p;
string o;
int main(){
	cin >> w >> n;
	for(int i = 1; i <= w; i++){
		a[i] = i;
	}
	for(int i = 1; i <= n; i++){
		x = 0;
		y = 0;
		cin >> o;
		p = o.find(',');
		for(int i = 0; i < p; i++){
			x *= 10;
			x += (int)o[i] - '0';
		}
		for(int i = p+1; i < o.length(); i++){
			y *= 10;
			y += (int)o[i] - '0';
		}
		h = a[y];
		a[y] = a[x];
		a[x] = h;
	}
	for(int i = 1; i <= w; i++){
		cout << a[i] << "\n";
	}
	return 0;
}