#include<iostream>
using namespace std;

int main() {
	int Array[100];
	int x,i;
	cin >> x;
	for (i = 0; i < x; i++){
		cin >> Array[i];
	}
	for  (int n = x-1; n > -1; n--){
		if (n == 0) 
			cout << Array[n] << endl;
		else
		cout << Array[n]<<" ";
	}
	cin >> i;
}