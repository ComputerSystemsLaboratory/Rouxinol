#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class Dice{
public:
	int face[6];
	Dice(int a, int b, int c, int d, int e, int f){
		face[0] = a;
		face[1] = b;
		face[2] = c;
		face[3] = d;
		face[4] = e;
		face[5] = f;
	}

	void move(char dire){
		int t;
		if (dire == 'E'){
			t = face[0];
			face[0] = face[3];
			face[3] = face[5];
			face[5] = face[2];
			face[2] = t;
		}
		if (dire == 'W'){
			t = face[0];
			face[0] = face[2];
			face[2] = face[5];
			face[5] = face[3];
			face[3] = t;
		}
		if (dire == 'N'){
			t = face[0];
			face[0] = face[1];
			face[1] = face[5];
			face[5] = face[4];
			face[4] = t;
		}
		if (dire == 'S'){
			t = face[0];
			face[0] = face[4];
			face[4] = face[5];
			face[5] = face[1];
			face[1] = t;
		}
		if (dire == 'T'){
			t = face[1];
			face[1] = face[2];
			face[2] = face[4];
			face[4] = face[3];
			face[3] = t;
		}
	}

};

int main(){
	int a0, b0, c0, d0, e0, f0;
	cin >> a0 >> b0 >> c0 >> d0 >> e0 >> f0;
	
	string st = "TTTTSTTTTSTTTTSTTTTSETTTTWWTTTT";

	int n, p, q;
	cin >> n;

	for (int j = 0; j < n; j++){
		Dice dice1(a0, b0, c0, d0, e0, f0);
		cin >> p >> q;
		for (int i = 0; i < st.size(); i++){
			char di = st[i];
			dice1.move(di);
			if (dice1.face[0] == p && dice1.face[1] == q){
				cout << dice1.face[2] << endl;
				break;
			}
		}
	}

	return 0;
}
