#include<iostream>
using namespace std;
int main() {
	int n, m;
	int s = 0;
	cin >> n >> m;
	int x[100][100];
	int y[100];
	int z[100];
	for (int yoko = 0; yoko < n; yoko++) {
		for (int tate = 0; tate < m; tate++) {
			cin >> x[yoko][tate];
		}
	}
	for (int kakeru = 0; kakeru < m; kakeru++) {
		cin >> y[kakeru];
	}
	for (int keisanA = 0; keisanA < n; keisanA++) {
		for (int keisanB = 0; keisanB < m; keisanB++) {
			s += x[keisanA][keisanB] * y[keisanB];
		}
		z[keisanA] = s;
		s = 0;
	}
	for (int naiseki = 0; naiseki < n; naiseki++) {
		cout << z[naiseki] << endl;
	}
	return 0;
}