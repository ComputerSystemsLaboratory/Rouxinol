#include<iostream>
#include <cstdio>
using namespace std;

const int n_MAX = 100,m_MAX = 100,l_MAX=100;
int a[n_MAX][m_MAX], b[m_MAX][l_MAX];
long int c[n_MAX][l_MAX];

void input(int n,int m,int l){
	for (int i1 = 0; i1 < n; i1++){
		for (int i2 = 0; i2 < m; i2++){
			cin >> a[i1][i2];
		}
	}
	for (int i1 = 0; i1 < m; i1++){
		for (int i2 = 0; i2 < l; i2++){
			cin >> b[i1][i2];
		}
	}
}

void matrix(int n,int m,int l){
	for (int i1 = 0; i1 < n; i1++){
		for (int i3 = 0;; i3++){
			c[i1][i3] = 0;
			for (int i2 = 0; i2 < m; i2++){
				c[i1][i3] += a[i1][i2] * b[i2][i3];
			}
			cout << c[i1][i3];
			if (i3 + 1 == l)break;
			cout << ' ';
		}
		cout << endl;
	}
}

int main(){

	int n, m, l;
	cin >> n >> m >> l;

	input(n, m, l);

	matrix(n, m, l);

	return 0;
}
