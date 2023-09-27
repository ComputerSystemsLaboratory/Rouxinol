#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

class dice{
public:
	int a[6];
	int b;
	void moveN(){
		b = a[0];
		a[0] = a[1];
		a[1] = a[5];
		a[5] = a[4];
		a[4] = b;
	}
	void moveS(){
		b = a[0];
		a[0] = a[4];
		a[4] = a[5];
		a[5] = a[1];
		a[1] = b;
	}
	void moveE(){
		b = a[0];
		a[0] = a[3];
		a[3] = a[5];
		a[5] = a[2];
		a[2] = b;
		
	}
	void moveW(){
		b = a[0];
		a[0] = a[2];
		a[2] = a[5];
		a[5] = a[3];
		a[3] = b;
	}
};

int main(){
	dice c;
	string d;
	for (int i = 0; i < 6; i++){
		cin >> c.a[i];
	}
	cin >> d;
	for (int i = 0; i < d.size(); i++){
		if (d[i] == 'N'){
			c.moveN();
		}
		if (d[i] == 'S'){
			c.moveS();
		}
		if (d[i] == 'E'){
			c.moveE();
		}
		if (d[i] == 'W'){
			c.moveW();
		}
	}

	cout << c.a[0] << endl;

	return 0;
}
