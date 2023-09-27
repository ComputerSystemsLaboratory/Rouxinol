#include<iostream>
using namespace std;

int main() {
	int a[101];
	for(int i = 0; i < 101; i ++) {
		a[i] = 0;
	}

	int x;
	int max = 0;
	while(cin >> x) {
		a[x]++;
		if(a[x] > max) {
			max = a[x];
		}
	}
	
	for(int i = 1; i < 101; i++) {
		if(a[i] == max) {
			cout << i << endl;
		} 
	}

	return 0;
}