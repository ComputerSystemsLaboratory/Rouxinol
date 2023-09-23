#include<iostream>
using namespace std;	

int main(){
	int n;
	int x;
	cin >> n;
	for (int i = 1; i < n + 1; i++){
		x = i;
		if (x % 3 == 0){
			cout << " " << i;
			continue;
		}
		while (1){
			if (x % 10 == 3){
				cout << " " << i;
				break;
			}
			x /= 10;
			if (x == 0) break;
		}
	}
	cout << endl;
	return 0;
}