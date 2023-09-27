#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>
#include<algorithm>
using namespace std;

class dice{
public:
	int d[6], tmp[6];
	dice(int n[6]){
		for (int i = 0; i < 6; i++){
			d[i] = n[i];
		}
	}
	void throwdice(char c){
		for (int i = 0; i < 6; i++){
			tmp[i] = d[i];
		}
		if (c == 'N'){
			d[0] = tmp[1];
			d[1] = tmp[5];
			d[2] = tmp[2];
			d[3] = tmp[3];
			d[4] = tmp[0];
			d[5] = tmp[4];
		}
		else if (c == 'E'){
			d[0] = tmp[3];
			d[1] = tmp[1];
			d[2] = tmp[0];
			d[3] = tmp[5];
			d[4] = tmp[4];
			d[5] = tmp[2];
		}
		else if (c == 'W'){
			d[0] = tmp[2];
			d[1] = tmp[1];
			d[2] = tmp[5];
			d[3] = tmp[0];
			d[4] = tmp[4];
			d[5] = tmp[3];
		}
		else if (c == 'S'){
			d[0] = tmp[4];
			d[1] = tmp[0];
			d[2] = tmp[2];
			d[3] = tmp[3];
			d[4] = tmp[5];
			d[5] = tmp[1];
		}
		else if (c == 'R'){
			d[0] = tmp[0];
			d[1] = tmp[3];
			d[2] = tmp[1];
			d[3] = tmp[4];
			d[4] = tmp[2];
			d[5] = tmp[5];
		}
	}
};
int main()
{
	int q;
	int n[6];
	for (int i = 0; i < 6; i++){
		cin >> n[i];
	}
	dice dice1(n);
	cin >> q;
	for (int i = 0; i < q; i++){
		bool upsame = false;
		int up, front;
		cin >> up >> front;
		for (int i = 0; i < 4; i++){
			dice1.throwdice('S');
			if (dice1.d[0] == up){
				upsame = true;
				break;
			}
		}
		if (!upsame){
			while (true){
				dice1.throwdice('W');
				if(dice1.d[0] == up){
					break;
				}
			}
		}

		for (int i = 0; i < 4; i++){
			dice1.throwdice('R');
			if (dice1.d[1] == front){
				break;
			}
		}
		cout << dice1.d[2] << endl;
	}

	return 0;
}