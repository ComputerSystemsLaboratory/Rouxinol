#include <iostream>
using namespace std;

int main(){
	int n, fraction;
	int debt = 100000;

	cin >> n;

	for(int i = 0; i < n; i++){
		debt = debt + (int)(debt*0.05);
		fraction = debt % 1000;
		if(fraction > 0) debt += 1000 - fraction;
	}

	cout << debt << endl;

	return 0;
}