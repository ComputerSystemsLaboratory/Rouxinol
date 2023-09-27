#include <iostream>
using namespace std;

class Dice {
	int *d;
public:
	Dice(int *pd);
	void roll(char dir);
	int me(int n);
	void top(int topn);
	void front(int frn);
};
Dice::Dice(int *pd) {
	d = pd;
}

void Dice::roll(char dir) {
	int tmp;
	if(dir=='E') {
		tmp = d[0];
		d[0] = d[3];
		d[3] = d[5];
		d[5] = d[2];
		d[2] = tmp;
		}
	else if(dir=='W') {
		tmp = d[0];
		d[0] = d[2];
		d[2] = d[5];
		d[5] = d[3];
		d[3] = tmp;
	}
	else if(dir=='S') {
		tmp = d[0];
		d[0] = d[4];
		d[4] = d[5];
		d[5] = d[1];
		d[1] = tmp;
	}
	else {
		tmp = d[0];
		d[0] = d[1];
		d[1] = d[5];
		d[5] = d[4];
		d[4] = tmp;
	}
}
int Dice::me(int n) {
	return d[n-1];
}
void Dice::top (int topn) {
	if(topn == d[1])
		roll('N');
	else if(topn == d[2])
		roll('W');
	else if(topn == d[3])
		roll('E');
	else if(topn == d[4])
		roll('S');
	else if(topn == d[5]) {
		roll('S');
		roll('S');
	}	 
}
void Dice::front (int frn) {
	if(frn == d[2]) {
		roll('W');
		roll('S');
		roll('E');		
	}
	if(frn == d[3]) {
		roll('E');
		roll('S');
		roll('W');		
	}
	if(frn == d[4]) {
		roll('W');
		roll('S');
		roll('S');
		roll('E');		
	}
}

int main()
{
	int d[6];
	int qn, tn, fn;
	for (int i=0; i < 6; i++)
		cin >> d[i];
	cin >> qn;
	Dice dice(d);
	for (int i = 0; i < qn; i++) {
		cin >> tn >> fn;
		dice.top(tn);
		dice.front(fn);
		cout << dice.me(3) << endl;
	}	
	return 0;
}