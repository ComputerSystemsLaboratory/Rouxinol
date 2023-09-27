#include <iostream>
using namespace std;

int main(){

	int w, n;
	int num[30] = { 0 };
	int a, b;
	char c;

	cin >> w;
	cin >> n;

	for (int i = 0; i<w; i++)
		num[i] = i + 1;

	for (int i = 0; i<n; i++){

		cin >> a >> c >> b;


		int tmp = num[a-1];
		num[a-1] = num[b-1];
		num[b-1] = tmp;


	}


	for (int i = 0; i<w; i++)
		cout << num[i] << "\n";

	return 0;

}