#include<iostream>
using namespace std;
#define max 1000000

int h = 0;
int a[max];

void maxheap(int i) {
	int l = i * 2;
	int r = i * 2 + 1;
	int largest;
	if (l <= h && a[l] > a[i]) {
		largest = l;
	}
	else largest = i;
	if (r <= h && a[r] > a[largest]) largest = r;

	if (largest != i) {
		swap(a[i], a[largest]);
		maxheap(largest);
	}
}

int main()
{
	cin >> h;
	for (int i = 1; i < h + 1; i++) {
		cin >> a[i];
	}

	for (int i = h / 2; i > 0; i--) {
		maxheap(i);
	}
	
	for (int i = 1; i < h + 1; i++) {
		cout << " " << a[i];
	}
	cout << endl;
	return 0;
}
