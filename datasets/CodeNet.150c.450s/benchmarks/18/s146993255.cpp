#include <iostream>

using namespace std;

int main(){
	int debt = 100000, n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		debt = ((int)(debt * 1.05) + 999) / 1000 * 1000;
	}
	cout << debt << endl;
	return 0;
}