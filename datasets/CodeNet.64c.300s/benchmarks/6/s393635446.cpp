#include <iostream>

using namespace std;

void disp(int h[3][10]) {
	for(int i=0; i<3; i++) {
		for(int j=0; j<10; j++) {
			cout << " " << h[i][j];
		}
		cout << endl;
	}
}

int main(){
	int n, b, f, r, v;
	int h1[3][10], h2[3][10], h3[3][10], h4[3][10];

	for(int i=0; i<3; i++) {
		for(int j=0; j<10; j++) {
			h1[i][j] = h2[i][j] = h3[i][j] = h4[i][j] = 0;
		}
	}

	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> b >> f >> r >> v;
		switch(b) {
			case 1:
				h1[f-1][r-1] += v;
				break;
			case 2:
				h2[f-1][r-1] += v;
				break;
			case 3:
				h3[f-1][r-1] += v;
				break;
			case 4:
				h4[f-1][r-1] += v;
				break;
		}
	}

	disp(h1);
	cout << "####################" << endl;
	disp(h2);
	cout << "####################" << endl;
	disp(h3);
	cout << "####################" << endl;
	disp(h4);

	return 0;
}
