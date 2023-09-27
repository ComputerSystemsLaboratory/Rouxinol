#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>

#define PI 3.14159265359
using namespace std;
class dice{
public:
	int d[6];
	void set(int n, int x){
		d[n] = x;
	}
	int get(int n){
		return d[n];
	}
	void rotate(char c){
		int tmp;
		if (c == 'W'){
			tmp = d[3];
			d[3] = d[0];
			d[0] = d[2];
			d[2] = d[5];
			d[5] = tmp;
		}
		else if (c == 'E'){
			tmp = d[5];
			d[5] = d[2];
			d[2] = d[0];
			d[0] = d[3];
			d[3] = tmp;
		}
		else  if (c == 'N'){
			tmp = d[0];
			d[0] = d[1];
			d[1] = d[5];
			d[5] = d[4];
			d[4] = tmp;
		}
		else {
			tmp = d[4];
			d[4] = d[5];
			d[5] = d[1];
			d[1] = d[0];
			d[0] = tmp;
		}
	}
};

int main(){
	int tmp;
	dice d;
	for (int i = 0; i < 6; i++){
		cin >> tmp;
		d.set(i, tmp);
	}
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) d.rotate(s[i]);
	cout << d.get(0) << endl;
}