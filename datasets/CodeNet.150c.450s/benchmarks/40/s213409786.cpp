#include "iostream"
#include "string"

int Dice[6];

class DiceMove
{
private:
public:
	DiceMove(){}
	void Move(char dir) {
		int temp;
		if (dir == 'N') {
			temp = Dice[0];
			Dice[0] = Dice[1];
			Dice[1] = Dice[5];
			Dice[5] = Dice[4];
			Dice[4] = temp;
		}
		if (dir == 'S') {
			temp = Dice[0];
			Dice[0] = Dice[4];
			Dice[4] = Dice[5];
			Dice[5] = Dice[1];
			Dice[1] = temp;
		}
		if (dir == 'E') {
			temp = Dice[0];
			Dice[0] = Dice[3];
			Dice[3] = Dice[5];
			Dice[5] = Dice[2];
			Dice[2] = temp;
		}
		if (dir == 'W') {
			temp = Dice[0];
			Dice[0] = Dice[2];
			Dice[2] = Dice[5];
			Dice[5] = Dice[3];
			Dice[3] = temp;
		}
	}
};

int main()
{
	char dir;
	DiceMove move;
	std::string direction;
	for (int i = 0; i < 6; i++)
		std::cin >> Dice[i];
	std::cin >> direction;
	for (int i = 0; i < direction.length(); i++) {
		dir = direction[i];
		if (direction[i] == 'N') move.Move(dir);
		if (direction[i] == 'S') move.Move(dir);
		if (direction[i] == 'E') move.Move(dir);
		if (direction[i] == 'W') move.Move(dir);
	}
	std::cout << Dice[0] << std::endl;
	return 0;
}