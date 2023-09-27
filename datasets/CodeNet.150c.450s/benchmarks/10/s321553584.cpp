#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, count[4][3][10] = {};
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b >> c >> d >> e;
		count[b-1][c-1][d-1] += e;
	}

	for (int x = 0; x < 4; x++) {
		for (int y = 0; y < 3; y++) {
			for (int z = 0; z < 10; z++) {
                              if (z != 10)cout<<" ";				
                              cout << count[x][y][z];
                               
			}
			cout << endl;
		}

		if(x != 3)cout << "####################" << endl;
	}

}
