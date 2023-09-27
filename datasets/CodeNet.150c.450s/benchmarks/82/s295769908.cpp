#include <stdio.h>
#include <iostream>
using namespace std;

void moveE(int dice[]);
void moveN(int dice[]);
void moveS(int dice[]);
void moveW(int dice[]);
void moveR(int dice[]);

int main(void)
{	
	int dice[6];
	for (int i = 0; i < 6; i++) cin >> dice[i];
	
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int num0, num1;
		cin >> num0 >> num1;
		
		int cnt = 0;
		while (dice[0] != num0) {
			if (cnt < 3) moveE(dice);
			else moveN(dice);
			cnt++;
		}
		while (dice[1] != num1) moveR(dice);
		
		cout << dice[2] << endl;
	}
	
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

void moveR(int dice[])
{
	int temp = dice[1];
	dice[1] = dice[2];
	dice[2] = dice[4];
	dice[4] = dice[3];
	dice[3] = temp;
}