#include <iostream>

using namespace std;

int main(){
	int e;
	while (1){
		cin >> e;
		int m = 1000000;
		if (e == 0) break;
		for (int z = 0; z * z * z <= e; z++){
			for (int y = 0; y * y + z * z * z <= e; y++){
				int x = e - z * z * z - y * y;
				if (m > x + y + z) { m = x + y + z; }
			}
		}
		cout << m << endl;
	}
	return 0;
}