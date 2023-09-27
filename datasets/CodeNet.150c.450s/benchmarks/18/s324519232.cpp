#include <iostream>

using namespace std;

int main(){
	int debt, n;

	cin >> n;

	debt = 100000;

	for (int i = 0; i < n; i++){
		debt *= 1.05;
		if (debt % 1000 != 0){
			debt = debt - (debt % 1000);
			debt += 1000;
		}
	}

	cout << debt << endl;
}