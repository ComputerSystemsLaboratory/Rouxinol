#include <iostream>
using namespace std;

int main()
{
		int n, i, j, k;
		cin >> n;
		int b, f, r, v, m[4][3][10];
		for (i=0; i<4; i++) for (j=0; j<3; j++) for (k=0; k<10; k++) m[i][j][k]=0;

		for (i=0; i<n; i++) { 
				cin >> b >> f >> r >> v;
				m[b-1][f-1][r-1] += v;
				//cout << m[b-1][f-1][r-1] << " ";
		}

		for (i=0; i<4; i++) {
				for (j=0; j<3; j++) {
						for (k=0; k<10; k++) cout << " " << m[i][j][k];
						if (j==2 && i!=3) cout << "\n####################\n";
						else cout << "\n";
				}
		}
}