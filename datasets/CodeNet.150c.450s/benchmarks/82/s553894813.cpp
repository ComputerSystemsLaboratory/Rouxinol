#include <iostream>
#include <array>
#include <string>

using namespace std;

enum class Direction {
	North = 0,
	East,
	South,
	West,

	up = North,
	right,
	down,
	left,
};

struct NeighborData {
	int index;
	Direction direction;
};

class Dice
{
private:
	int number[6];
	struct state {
		int topSurfaceIndex;
		Direction direction;
	} currentState;
	string rollOrder;
	// NeighborData neighbor[6][4]
	const NeighborData neighborTable[6][4] = {
	    /* up,                   right,                 down,                  left     */
	    {{4, Direction::South}, {2, Direction::West},  {1, Direction::North}, {3, Direction::East}},
	    {{0, Direction::North}, {2, Direction::North}, {5, Direction::North}, {3, Direction::North}},
	    {{0, Direction::East},  {4, Direction::North}, {5, Direction::West},  {1, Direction::North}},
	    {{0, Direction::West},  {1, Direction::North}, {5, Direction::East},  {4, Direction::North}},
	    {{0, Direction::South}, {3, Direction::North}, {5, Direction::South}, {2, Direction::North}},
	    {{1, Direction::North}, {2, Direction::East},  {4, Direction::South}, {3, Direction::West}}};

public:
	Dice()
	: currentState({0, Direction::North}) {}

	void input() {
		inputNumber();
		inputRollOrder();
	}

	void inputNumber() {
		for(auto&& e : number) {
			cin >> e;
		}
	}

	void inputRollOrder() {
		cin >> rollOrder;
	}

	void executeRollOrder() {
		while(1) {
			char dir = fetchRollOrder();
			if(0 == dir) { return; }
			roll(dir);
		}
	}

	char fetchRollOrder() {
		char c;
		if(0 < rollOrder.length()) {
			c = rollOrder.front();
			rollOrder.erase(rollOrder.begin());
		} else {
			c = 0;
		}
		return c;
	}

	void roll(char rollDirection) {
		int backupTopSurfaceIndex = currentState.topSurfaceIndex;
		Direction dir;
		switch(currentState.direction) {
			case Direction::North:
				switch(rollDirection) {
					case 'N': dir = Direction::down; break;
					case 'E': dir = Direction::left; break;
					case 'W': dir = Direction::right; break;
					case 'S': dir = Direction::up; break;
					default: return;
				}
				break;

			case Direction::East:
				switch(rollDirection) {
					case 'N': dir = Direction::right; break;
					case 'E': dir = Direction::down; break;
					case 'W': dir = Direction::up; break;
					case 'S': dir = Direction::left; break;
					default: return;
				}
				break;

			case Direction::South:
				switch(rollDirection) {
					case 'N': dir = Direction::up; break;
					case 'E': dir = Direction::right; break;
					case 'W': dir = Direction::left; break;
					case 'S': dir = Direction::down; break;
					default: return;
				}
				break;

			case Direction::West:
				switch(rollDirection) {
					case 'N': dir = Direction::left; break;
					case 'E': dir = Direction::up; break;
					case 'W': dir = Direction::down; break;
					case 'S': dir = Direction::right; break;
					default: return;
				}
				break;
			default: return;
		}

		currentState.topSurfaceIndex = neighborTable[backupTopSurfaceIndex][(int)dir].index;
		currentState.direction = (Direction)(((int)neighborTable[backupTopSurfaceIndex][(int)dir].direction + (int)currentState.direction) % 4);
	}

	int getTopSurfaceNumber() const {
		return number[currentState.topSurfaceIndex];
	}

	int getRightSurfaceNumber() const {
		Direction dir;
		switch (currentState.direction)
		{
		case Direction::North:
			dir = Direction::right;
			break;

		case Direction::East:
			dir = Direction::up;
			break;

		case Direction::South:
			dir = Direction::left;
			break;

		case Direction::West:
			dir = Direction::down;
			break;
		default:
			break;
		}
		return number[neighborTable[currentState.topSurfaceIndex][(int)dir].index];
	}

	void setCurrentState(const state st) {
		currentState = st;
	}

	state identifyCurrentState(const int topNumber, const int frontNumber) const {
		int topIndex, frontIndex;
		topIndex = convertNumber2Index(topNumber);
		frontIndex = convertNumber2Index(frontNumber);

		try {
			for(int i = 0; i < 4; ++i){
				if(frontIndex == neighborTable[topIndex][i].index){
					switch ((Direction)i)
					{
					case Direction::up:
						return {topIndex, Direction::South};

					case Direction::right:
						return {topIndex, Direction::East};

					case Direction::down:
						return {topIndex, Direction::North};

					case Direction::left:
						return {topIndex, Direction::West};
					default:
						break;
					}
				}
			}
				throw "Index Error\n";
		} catch(char* arg) {
			cout << arg;
			return {0, Direction::North};
		}
	}

	int convertNumber2Index(const int _number) const {
		try {
			for(int i = 0; i < 6; ++i) {
				if(_number == number[i]) {
					return i;
				}
			}
			throw "Index Error\n";
		} catch(char* arg) {
			cout << arg;
			return 0;
		}
	}
};

int main() {
	Dice dice;
	int q, topNumber, frontNumber;
	dice.inputNumber();
	cin >> q;
	for(int i = 0; i < q; ++i) {
		cin >> topNumber >> frontNumber;
		dice.setCurrentState(dice.identifyCurrentState(topNumber, frontNumber));
		cout << dice.getRightSurfaceNumber() << endl;
	}
	return 0;
}
