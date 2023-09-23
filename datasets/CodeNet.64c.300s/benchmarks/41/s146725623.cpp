#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;
long H;
long a[500001];
void maxHeapify(long i){
	long l = 2 * i;
	long r = 2 * i + 1;
	long largest = i;
	if (l <= H && a[l] > a[largest]) largest = l;
	if (r <= H && a[r] > a[largest]) largest = r;
	if (largest != i){
		swap(a[i], a[largest]);
		maxHeapify(largest);
	}
}
void buidMaxHeap(){
	for (long i = H / 2; i >= 1; --i) maxHeapify(i);
}
int main(){
	scanf("%ld", &H);
	for (long i = 1; i <= H; ++i) scanf("%ld",&a[i]);
	buidMaxHeap();
	for (long i = 1; i <= H; ++i) cout << ' ' << a[i];
	cout << '\n';
}