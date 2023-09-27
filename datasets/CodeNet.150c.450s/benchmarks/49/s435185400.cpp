#include<iostream>
#include<algorithm>
#include <numeric>
using namespace std;

int main(){
	int n;

	while (cin >> n, n){
		int a[100];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int sum = accumulate(a, a + n, 0);
		int Max = *max_element(a, a + n);
		int Min = *min_element(a, a + n);
		cout << (sum - (Max + Min)) / (n - 2) << endl;
	}
	return 0;
}