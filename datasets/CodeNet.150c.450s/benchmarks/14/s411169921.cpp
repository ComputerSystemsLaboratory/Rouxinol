#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

void call(int n){
	for(int i = 1; i <= n; i++){
		if(i % 3 == 0) cout << " " << i;
		else{
			for(int tmp = i; tmp != 0; tmp /= 10){
				if(tmp % 10 == 3){
					cout << " " << i;
					break;
				}
			}
		}
	}
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	call(n);
	return 0;
}