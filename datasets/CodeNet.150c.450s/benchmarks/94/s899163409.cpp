#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int bubbleSort(vector<int> &a, int n){
	bool flag = true;
	int count = 0;
	while (flag){
		flag = false;
		for (int j = n - 1; j >= 1; j--){
			if (a[j] < a[j - 1]){
				swap(a[j], a[j - 1]);
				flag = true;
				count++;
			}
		}
	}
	return count;
}

int main(){
	int n, count;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	count = bubbleSort(a, n);
	for (int i = 0; i < n; i++){
		cout << a[i];
		if (i != n - 1) cout << " ";
	}
	cout << endl << count << endl;
}