#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int selectionSort(vector<int> &a, int n){
	int minj, count = 0;
	for (int i = 0; i < n; i++){
		minj = i;
		for (int j = i; j < n; j++){
			if (a[j] < a[minj]) minj = j;
		}
		if (i != minj){
			swap(a[i], a[minj]);
			count++;
		}
	}
	return count;
}

int main(){
	int n, count;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	count = selectionSort(a, n);
	for (int i = 0; i < n; i++){
		cout << a[i];
		if (i != n - 1) cout << " ";
	}
	cout << endl << count << endl;
}