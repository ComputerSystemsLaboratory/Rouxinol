#include <iostream>
using namespace std;
 
int main()
{
	int ndata, b, f, r, v;
	int rm[4][3][10];
	
	for(int i = 0; i < 4 ; i++) {
		for(int j = 0; j < 3 ; j++)
			for (int k = 0; k < 10; k++)
				rm[i][j][k] = 0;
	}
	
	cin >> ndata;
	
	for (int i = 0; i < ndata; i++) {
		cin >> b >> f >> r >> v;
		rm[b-1][f-1][r-1] += v;
	}

	for(int i = 0; i < 4 ; i++) {
		for(int j = 0; j < 3 ; j++) {
			for (int k = 0; k < 10; k++)
				cout << ' ' << rm[i][j][k];
			cout << endl;
		}
		if(i!=3)
		cout << "####################" << endl;
    }
    return 0;
}