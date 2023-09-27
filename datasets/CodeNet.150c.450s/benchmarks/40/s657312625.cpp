#include<iostream>
#include<string>

using namespace std;

class dice{
public:
	int a[7];
	void moveS(){
		int temp = a[1];
		a[1] = a[5];
		a[5] = a[6];
		a[6] = a[2];
		a[2] = temp;
	}

	void moveW(){
		int temp = a[1];
		a[1] = a[3];
		a[3] = a[6];
		a[6] = a[4];
		a[4] = temp;
	}

	void moveN(){
		int temp = a[1];
		a[1] = a[2];
		a[2] = a[6];
		a[6] = a[5];
		a[5] = temp;
	}

	void moveE(){
		int temp = a[1];
		a[1] = a[4];
		a[4] = a[6];
		a[6] = a[3];
		a[3] = temp;
	}
};

int main(){
	dice x;
	int a1, b2, c3, d4, e5, f6;
	cin >> a1 >> b2 >> c3 >> d4 >> e5 >> f6;
	x.a[0] = 0;
	x.a[1] = a1;
	x.a[2] = b2;
	x.a[3] = c3;
	x.a[4] = d4;
	x.a[5] = e5;
	x.a[6] = f6;

	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == 'S'){
			x.moveS();
		}
		else if (s[i] == 'W'){
			x.moveW();
		}
		else if (s[i] == 'N'){
			x.moveN();
		}
		else x.moveE();
	}

	cout << x.a[1] << endl;

	return 0;
}
