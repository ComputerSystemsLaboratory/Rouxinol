#include <iostream>
using namespace std;

int main(){
	int r, c, i, j;
	int n ,s;
	int w=0;

	cin >> r >> c;

	int a[r][c];

	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
		cin >> a[i][j];
		}
	}

	for(i=0; i<r; i++){
		n=0;
		for(j=0; j<c; j++){
			n = n + a[i][j];
			cout << a[i][j] << " ";
		}
		cout << n << endl;;
	}

	for(j=0; j<c; j++){
		s=0;
		for(i=0; i<r; i++){
			s = s + a[i][j];
		}
		w = w + s;
		cout << s <<" ";
	}

	cout << w << endl;

}