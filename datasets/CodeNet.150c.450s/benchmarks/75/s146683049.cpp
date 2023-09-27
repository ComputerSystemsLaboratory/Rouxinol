#include <iostream>

using namespace std;
static const int MAX = 2000000;

int H, A[MAX + 1];

void maxHeapify(int i){
	int l, r, largest;
	l = 2 * i;
	r = 2 * i + 1;
	largest = i;
	if (l <= H && A[l] > A[i]){
		largest = l;
	}
	if (r <= H && A[r] > A[largest]){
		largest = r;
	}
	if (largest != i){
		int temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;
		maxHeapify(largest);
	}
}

void solve(){
	cin >> H;
	for (int i = 1; i <= H; ++i)
	{
		cin >> A[i];
	}
	for (int i = H / 2; i >= 1; --i)
	{
		maxHeapify(i);
	}
	for (int i = 1; i <= H; ++i)
	{
		cout << " " << A[i];
	}
	cout << endl;
}

int main(){
	cin >> H;
	for (int i = 1; i <= H; ++i){
		cin >> A[i];
	}
	for (int i = H / 2; i >= 1; --i){
		maxHeapify(i);
	}
	for (int i = 1; i <= H; ++i){
		cout << " " << A[i];
	}
	cout << endl;
	return 0;
}

