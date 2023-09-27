#include <iostream>
#include <cstring>
using namespace std;
int main(){	
	int room[4][3][10],num,a, b, c, d;
	memset(room, 0, sizeof(room));
	cin >> num;
	for (int i = 0; i < num; i++){	
		cin >> a >> b >> c >> d ;
		room[a - 1][b - 1][c - 1] += d;
	}
	for (a = 0; a < 4; a++){
		for (b = 0; b < 3; b++){
			for (int c = 0; c < 10; c++)
				cout << " " << room[a][b][c];
			cout << endl;
		}
		if(a != 3)cout << "####################" << endl;
	}
}