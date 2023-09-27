#include <iostream>
#include <cstdio>
using namespace std;

class dice{
private:
	int me[6];
public:
	int set();
	int roll(char c);
	int show();
};

int dice::set(){
	int i;

	for (i = 0; i < 6; i++)
		cin >> me[i];

	return 0;
}

int dice::roll(char c){
	int temp;
	if (c == 'S'){
		temp = me[0];
		me[0] = me[4];
		me[4] = me[5];
		me[5] = me[1];
		me[1] = temp;
	}
	else if (c == 'N'){
		temp = me[0];
		me[0] = me[1];
		me[1] = me[5];
		me[5] = me[4];
		me[4] = temp;
	}
	else if (c == 'W'){
		temp = me[0];
		me[0] = me[2];
		me[2] = me[5];
		me[5] = me[3];
		me[3] = temp;
	}
	else if (c == 'E'){
		temp = me[0];
		me[0] = me[3];
		me[3] = me[5];
		me[5] = me[2];
		me[2] = temp;
	}

	return 0;
}

int dice::show(){

	cout << me[0] << endl;
	return 0;
}

int main(){
	dice d;
	string c;
	int i;

	d.set();

	cin >> c;

	for (i = 0; i < c.length(); i++)
		d.roll(c[i]);

	d.show();

	return 0;
}