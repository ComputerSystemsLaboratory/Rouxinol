#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, k = 100000;
	cin >> n;
	for(int i = 0;i<n;i++){
		k *= 1.05;
		if(k%1000>0){
			k = k - (k % 1000) + 1000;
		}
	}
	cout << k << endl;
	return 0;
}