#include <iostream>
#include <vector>

using namespace std;
int main() {
	int a[30];
	int x;
	for (int i = 0; i < 30; i++) {
		a[i] = -1;
	}

	for (int i = 0; i < 28; i++) {
		cin >> x;
		a[x-1] = 0;
	}
	for (int i = 0; i < 30; i++) {
		if (a[i] == -1) cout << i+1 << endl;
	}


	
	


	//getchar();
	//getchar();
}