#include <iostream>
#include <vector>
#include <string>

using namespace std;

void call(int n){

	for (int i = 1; i <= n; i++){
		if (i % 3 == 0){
			cout << " " << i;
		}
		else {
			for (int s = i; s >= 3; s /= 10){
				if (s % 10 == 3){
					cout << " " << i;
					break;
				}
			}
		}
	}
	cout << endl;
}

int main(void){

	int n;
	cin >> n;
	call(n);

	return 0;
}