#include <iostream>
#include <vector>

using namespace std;
int main() {
	int a,suma=0,sumb=0;
	for (int i = 0; i< 4; i++) {
		cin >> a;
		suma += a;
	}

	for (int i = 0; i < 4; i++) {
		cin >> a;
		sumb += a;
	}

	if (suma > sumb) {
		cout << suma << endl;
	}
	else {
		cout << sumb << endl;
	}
	
	


	//getchar();
	//getchar();
}