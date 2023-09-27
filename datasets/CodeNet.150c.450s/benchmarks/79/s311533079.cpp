#include <iostream>
#include <algorithm>

using namespace std;
int n, r, p, c;

int main(){
	while (cin >> n >> r && n){
		int a[55] = {};
		for (int i = 0; i < n; i++){
			a[i] = i + 1;
		}
		for (int j = 0; j < r; j++){
			cin >> p >> c;
			rotate(a + n - p - c + 1, a + n - p + 1, a + n);
		}
		cout << a[n - 1] << endl;
	}
	return 0;
}