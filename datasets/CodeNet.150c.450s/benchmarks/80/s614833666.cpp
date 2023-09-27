#include<iostream>

using namespace std;

int main(void) {
	int suma, sumb, tmp;
	int i;

	suma = 0;
	for(i = 0; i < 4; i++) {
		cin >> tmp;
		suma += tmp;
	}
	sumb = 0;
	for(i = 0; i < 4; i++) {
		cin >> tmp;
		sumb += tmp;
	}

	cout << max(suma, sumb) << endl;

	return 0;
}