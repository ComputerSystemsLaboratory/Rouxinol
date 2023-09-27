#include <string>
#include <iostream>

using namespace std;

class Dice
{
private:
	int top_;		// ?????¢
	int north_;		// ?????¢
	int south_;		// ?????¢
	int east_; 		// ??±??¢
	int west_; 		// ?\???¢
	int bottom_;	// ?????¢

private:
	Dice() {}

public:
	Dice( const int& topNumber
		, const int& northNumber
		, const int& southNumber
		, const int& eastNumber
		, const int& westNumber
		, const int& bottomNumber )
	{
		top_	= topNumber;
		north_	= northNumber;
		south_	= southNumber;
		east_	= eastNumber;
		west_	= westNumber;
		bottom_	= bottomNumber;
	}

	~Dice() {}

	int getTopNumber() {
		return top_;
	}

private:
	// ?????¢?£??????¢??°
	void rotate(int& a, int& b, int& c, int& d) const {
		int tmp = a;
		a = b;
		b = c;
		c = d;
		d = tmp;
	}

public:
	void rotateNorth()	{ rotate(top_, south_, bottom_, north_); }
	void rotateSouth()	{ rotate(top_, north_, bottom_, south_); }
	void rotateEast()	{ rotate(top_, west_, bottom_, east_); }
	void rotateWest()	{ rotate(top_, east_, bottom_, west_); }
#if 0	// ??????????????¨?????????
	void rotateClockwise()		{ rotate(north_, west_, south_, east_); }
	void rotateAnticlockwise()	{ rotate(north_, east_, south_, west_); }

#endif
};

void diceRotate(Dice& dice, const string& commands)
{
	for ( unsigned int i = 0; i < commands.size(); ++i ) {

		const char& command  = commands[i];
		if ( command == 'N' ) {
			dice.rotateNorth();
		} else if ( command == 'S' ) {
			dice.rotateSouth();
		} else if ( command == 'E' ) {
			dice.rotateEast();
		} else if ( command == 'W' ) {
			dice.rotateWest();
		}

	}
}

int main(int, char**)
{
	const int diceSize = 6;
	int diceNumbers[diceSize];
	for ( int i = 0; i < diceSize; ++i) {
		cin >> diceNumbers[i];
	}

	Dice dice(diceNumbers[0]	// ?????¢
			, diceNumbers[4]	// ?????¢
			, diceNumbers[1]	// ?????¢
			, diceNumbers[2]	// ??±??¢
			, diceNumbers[3]	// ?\???¢
			, diceNumbers[5]);	// ?????¢

	string commands;
	cin >> commands;

	diceRotate(dice, commands);

	cout << dice.getTopNumber() << endl;

	return 0;
}