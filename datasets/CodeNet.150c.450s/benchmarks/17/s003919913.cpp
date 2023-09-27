#include <iostream>
using namespace std;

inline void swap(int a[], int i, int j){
	int t = a[i]; a[i] = a[j]; a[j] = t;
}

void selection(int a[], int N)
{
	int i, j, min;
	for(i = 1; i < N; i++){
		min = i;
		for(j = i + 1; j <= N;j++)
			if(a[min] > a[j]) min = j;
		swap(a, min, i);
	}
}

int main(){
	int a[6];
	for(int i = 1; i <= 5; i++){
		int n;
		cin >> n;
		a[i] = n;
	}
	selection(a, 5);
	for(int i = 5; i > 1; i--)
		cout << a[i] << " ";
	cout << a[1] << endl;
}