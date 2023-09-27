#include <iostream>
#include <string>
using namespace std;

class Dice{
public:
	int dice[6];
	int buff1, buff2, buff3;
	void north(){
		buff1 = dice[0];
		buff2 = dice[1];
		buff3 = dice[5];
		dice[5] = dice[4];	// 5 <- 1'
		dice[0] = buff2;	// 0 <- 4
		dice[4] = buff1;	// 4 <- 5'
		dice[1] = buff3;	// 1 <- 0'
	}
	void south(){
		buff1 = dice[0];
		buff2 = dice[1];
		buff3 = dice[5];
		dice[0] = dice[4];	// 0 <- 1'
		dice[1] = buff1;	// 1 <- 5'
		dice[5] = buff2;	// 5 <- 4
		dice[4] = buff3;	// 4 <- 0'
	}
	void west(){
		buff1 = dice[0];
		buff2 = dice[2];
		buff3 = dice[5];
		dice[0] = buff2;	// 0 <- 2'
		dice[2] = buff3;	// 2 <- 5'
		dice[5] = dice[3];	// 5 <- 3
		dice[3] = buff1;	// 3 <- 0'
	}
	void east(){
		buff1 = dice[0];
		buff2 = dice[2];
		buff3 = dice[5];
		dice[2] = buff1;	// 2 <- 0'
		dice[5] = buff2;	// 5 <- 2'
		dice[0] = dice[3];	// 0 <- 3
		dice[3] = buff3;	// 3 <- 5'
	}
};

int main()
{
	Dice d;
	for(int n = 0; n < 6; n++)
		cin >> d.dice[n];

	string command;
	string::iterator itr;
	char direction;
	cin >> command;
	for(itr = command.begin(); itr != command.end(); itr++){
		direction = *itr;
		if(direction == 'N')
			d.north();
		if(direction == 'S')
			d.south();
		if(direction == 'E')
			d.east();
		if(direction == 'W')
			d.west();
	}
	cout << d.dice[0] << endl;
}