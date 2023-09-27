#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Dice
{
public:
	int label[6];
	void N();
	void S();
	void W();
	void E();
};

void Dice::N()
{
	int newlabel[6];
	newlabel[0] = label[1];
	newlabel[1] = label[5];
	newlabel[2] = label[2];
	newlabel[3] = label[3];
	newlabel[4] = label[0];
	newlabel[5] = label[4];
	for(int i = 0; i < 6; i++) {
		label[i] = newlabel[i];
	}
}

void Dice::S()
{
	int newlabel[6];
	newlabel[0] = label[4];
	newlabel[1] = label[0];
	newlabel[2] = label[2];
	newlabel[3] = label[3];
	newlabel[4] = label[5];
	newlabel[5] = label[1];
	for(int i = 0; i < 6; i++) {
		label[i] = newlabel[i];
	}
}

void Dice::W()
{
	int newlabel[6];
	newlabel[0] = label[2];
	newlabel[1] = label[1];
	newlabel[2] = label[5];
	newlabel[3] = label[0];
	newlabel[4] = label[4];
	newlabel[5] = label[3];
	for(int i = 0; i < 6; i++) {
		label[i] = newlabel[i];
	}
}

void Dice::E()
{
	int newlabel[6];
	newlabel[0] = label[3];
	newlabel[1] = label[1];
	newlabel[2] = label[0];
	newlabel[3] = label[5];
	newlabel[4] = label[4];
	newlabel[5] = label[2];
	for(int i = 0; i < 6; i++) {
		label[i] = newlabel[i];
	}
}

int main() {
	Dice d;
	scanf("%d %d %d %d %d %d", &d.label[0], &d.label[1], &d.label[2], &d.label[3], &d.label[4], &d.label[5]);
	string cmd;
	cin >> cmd;
	for(int i = 0; i < cmd.size(); i++) {
		if(cmd[i] == 'N') d.N();
		else if(cmd[i] == 'S') d.S();
		else if(cmd[i] == 'W') d.W();
		else if(cmd[i] == 'E') d.E();
	}
	printf("%d\n", d.label[0]);
	return 0;
}