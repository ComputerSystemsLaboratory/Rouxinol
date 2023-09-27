#include <iostream>

using namespace std;

int main(){
	int n, x;
	cin >> n;
	int array[n];

	for(int i = 0; i < n; i++){
		cin >> x;
		array[i] = x;
	}

	for(int j = n - 1; j >= 0; j--){
		cout << array[j];
		if(j != 0) cout << " ";
	}
	cout << endl;

	return 0;
}