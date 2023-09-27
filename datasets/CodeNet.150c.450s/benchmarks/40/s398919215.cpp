#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

void moveE(int dice[]);
void moveN(int dice[]);
void moveS(int dice[]);
void moveW(int dice[]);

int main(void)
{	
	int dice[6];
	for (int i = 0; i < 6; i++) cin >> dice[i];
	
	char order[101] = "\0";
	cin >> order;
	
	for (int j = 0; order[j] != '\0'; j++) {
		if (order[j] == 'E') moveE(dice);
		else if (order[j] == 'N') moveN(dice);
		else if (order[j] == 'S') moveS(dice);
		else moveW(dice);
	}
	
	cout << dice[0] << endl;
	
	return 0;
}

void moveE(int dice[])
{
	int temp = dice[0];
	dice[0] = dice[3];
	dice[3] = dice[5];
	dice[5] = dice[2];
	dice[2] = temp;
}

void moveN(int dice[])
{
	int temp = dice[0];
	dice[0] = dice[1];
	dice[1] = dice[5];
	dice[5] = dice[4];
	dice[4] = temp;
}

void moveS(int dice[])
{
	int temp = dice[0];
	dice[0] = dice[4];
	dice[4] = dice[5];
	dice[5] = dice[1];
	dice[1] = temp;
}

void moveW(int dice[])
{
	int temp = dice[0];
	dice[0] = dice[2];
	dice[2] = dice[5];
	dice[5] = dice[3];
	dice[3] = temp;
}