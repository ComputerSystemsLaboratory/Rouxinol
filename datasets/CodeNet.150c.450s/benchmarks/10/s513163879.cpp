#include<iostream>
using namespace std;
int main(){
	int n, ninngen[4][3][10] = {}, d, f, r, v;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> d;
		cin >> f;
		cin >> r;
		cin >> v;
		ninngen[d - 1][f - 1][r - 1] += v;
	}
	for (int i2 = 0; i2 < 3; i2++){
		for (int i3 = 0; i3 < 3; i3++){
			for (int i4 = 0; i4 < 10; i4++){
				cout << " " << ninngen[i2][i3][i4];
			}
			cout << endl;
		}
		cout << "####################" << endl;
	}
	for (int i3 = 0; i3 < 2; i3++){
		for (int i4 = 0; i4 < 10; i4++){
			cout << " " << ninngen[3][i3][i4];
		}
		cout << endl;
	}
	for (int i4 = 0; i4 < 10; i4++){
		cout << " " << ninngen[3][2][i4];
	}
	cout << endl;
	return 0;
}