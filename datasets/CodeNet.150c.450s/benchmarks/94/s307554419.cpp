#include <iostream>

using namespace std;

int bubbleSort(int a[], int n){
	int count = 0;
	bool flag = true;
	for(int i = 0; flag; i++){
		flag = false;
		for(int j = n-1; j >= i+1; j--){
			if(a[j-1] > a[j]){
				swap(a[j-1], a[j]);
				flag = true;
				count++;
			}
		}
	}
	return count;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	int count = bubbleSort(a, n);

	for(int i = 0; i < n; i++){
		if(i) cout << " ";
		cout << a[i];
	}
	cout << endl;
	cout << count << endl;
}