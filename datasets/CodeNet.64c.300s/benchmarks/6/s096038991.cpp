#include <iostream>
using namespace std;

int main(){
	int data[12][10] = {0};
	int n;

	cin >> n;

	for (int i = 0; i < n; i++){
		int b, f, r, v;
		cin >> b >> f >> r >> v;

		f += (b - 1) * 3;
		f -= 1;

		r -= 1;
		data[f][r] += v;
	}

	
	for (int i = 0; i < 12;i++){
		for (int j = 0; j < 10; j++){
			if (i % 3 == 0 && i != 0 && j == 0) cout << "####################" << endl;
			cout << " ";
			cout << data[i][j];
		}
		 cout << endl;
	}
}