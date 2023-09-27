#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class Dice{
	int face[6];
public:
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
	}

	int uemen(){
		return face[0];
	}
};

int main(){
	int a0, b0, c0, d0, e0, f0;
	cin >> a0 >> b0 >> c0 >> d0 >> e0 >> f0;

	Dice dice1(a0, b0, c0, d0, e0, f0);
	
	string st;
	cin >> st;

	for (int i = 0; i < st.size(); i++){
		char di = st[i];
		dice1.move(di);
	}

	cout << dice1.uemen() << endl;

	return 0;
}
