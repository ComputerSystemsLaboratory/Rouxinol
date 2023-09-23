#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int a[510000];
int h;
void maxheapify(int i) {
	int l = 2 * i, r = 2 * i + 1;
	int lar;
	if (l <= h && a[i] < a[l])lar = l;
	else lar = i;
	if (r <= h&& a[lar] < a[r])lar = r;

	if (lar != i) {
		swap(a[i], a[lar]);
		maxheapify(lar);
	}
}
void buildHeap(){
	for (int i = h / 2; i > 0; i--) maxheapify(i);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	cin >> h;
	for (int i = 1; i <= h; i++) {
		cin >> a[i];
	}
	buildHeap();
	for (int i = 1; i <= h; i++) {
		cout << " " << a[i];
	}
	cout << endl;
}
