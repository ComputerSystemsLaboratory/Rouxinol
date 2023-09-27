#include <iostream>
using namespace std;

int main(void){
	int x, y;
	
	while (true){
		cin >> x >> y;
		
		if (x == 0 && y == 0) break;

		if (x > y) cout << y << " " << x << "\n";
		else cout << x << " " << y << "\n";
	}

	return 0;
}