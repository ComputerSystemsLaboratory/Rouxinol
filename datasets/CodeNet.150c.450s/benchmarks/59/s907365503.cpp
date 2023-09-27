#include <iostream>
using namespace std;

int N;
int a[101];
void print(){
	for (int i = 0; i < N; ++i){
		if (i != 0) cout << " ";
		cout << a[i];
	}
	cout << '\n';
}
void insertionSort(){
	for (int i = 1; i < N; ++i){
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > v){
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = v;
		print();
	}
}

int main(){
	cin >> N;
	for (int i = 0; i < N; ++i) cin >> a[i];
	print();
	insertionSort();
}