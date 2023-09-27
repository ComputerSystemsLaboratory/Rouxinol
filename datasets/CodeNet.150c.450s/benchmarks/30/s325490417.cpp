#include <iostream>
#include <algorithm>
using namespace std;
int a[100];
int selectionSort(int n){
	int cnt = 0;
	for (int i = 0; i <= n - 1; ++i){
		int Minj = i;
		for (int j = i; j <= n - 1; ++j) if (a[j] < a[Minj]) Minj = j;
		if(i!=Minj) swap(a[i], a[Minj]), ++cnt;
	}
	return cnt;
}
int main(){
	int n; cin >> n; 
	for (int i = 0; i < n; ++i) cin >> a[i];
	int cnt=selectionSort(n);
	for (int i = 0; i < n; ++i){
		if (i != 0) cout << ' ';
		cout << a[i];
	}
	cout << '\n' << cnt << '\n';
}