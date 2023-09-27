#include <iostream>
#include <string>
using namespace std;


int main(){
	int a[10];
	int n;
	for (int i = 0; i < 10; i++){
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 10; j++){
			if (i < j){
				if (a[i] < a[j]){
					n = a[i];
					a[i] = a[j];
					a[j] = n;
				}
			}
		}
	}
	for (int i = 0; i < 3; i++){
		cout << a[i] << endl;
	}
	return 0;
}
