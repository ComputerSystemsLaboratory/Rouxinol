#include <iostream>
#define K 10001

using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n;
	int *a = new int[2000001];
	int *b = new int[2000001];
	int *c = new int[K];
	cin >> n;
	for(int i = 0; i < K; i++){
		c[i] = 0;
	}
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++){
		c[a[i]]++; 
	}
	for(int i = 1; i <= K; i++){
		c[i] = c[i] + c[i - 1];
	}
	for(int i = n; i >= 1; i--){
		b[c[a[i]]] = a[i];
		c[a[i]]--;
	}
	for(int i =1; i < n; i++){
		cout << b[i] << " ";
	}
	cout << b[n ] << endl;
	delete[] a;
	delete[] b;
	delete[] c;
	return 0;
}