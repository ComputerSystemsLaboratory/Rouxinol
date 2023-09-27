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
		else{
			d[0] = tmp[4];
			d[1] = tmp[0];
			d[2] = tmp[2];
			d[3] = tmp[3];
			d[4] = tmp[5];
			d[5] = tmp[1];
		}
	}
};
int main()
{
	int n[6];
	for (int i = 0; i < 6; i++){
		cin >> n[i];
	}
	dice dice1(n);
	string dir;
	cin >> dir;
	for (int i = 0; i < dir.length(); i++){
		dice1.throwdice(dir[i]);
	}
	cout << dice1.d[0] << endl;


	return 0;
}