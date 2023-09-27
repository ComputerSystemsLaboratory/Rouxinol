#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ???????????¢?????????
class DiceSurface
{
private:
	unsigned short	number_;	// ????????¢??????????????????

public:
	DiceSurface() {}
	DiceSurface(const unsigned short& number)
		: number_(number)
	{}

	~DiceSurface() {}

	// ?????????
	void setNumber(const unsigned short& number) { number_ = number; }
	// ?????????
	unsigned short getNumber() const { return number_; }

};


class Dice
{
private:
	const DiceSurface* top_;	// ?????¢
	const DiceSurface* north_;	// ?????¢
	const DiceSurface* south_;	// ?????¢
	const DiceSurface* east_; 	// ??±??¢
	const DiceSurface* west_; 	// ?\???¢
	const DiceSurface* bottom_;	// ?????¢

private:
	Dice() {}

public:
	Dice( const unsigned short& topNumber
		, const unsigned short& northNumber
		, const unsigned short& southNumber
		, const unsigned short& eastNumber
		, const unsigned short& westNumber
		, const unsigned short& bottomNumber )
	{
		top_	= new DiceSurface(topNumber);
		north_	= new DiceSurface(northNumber);
		south_	= new DiceSurface(southNumber);
		east_	= new DiceSurface(eastNumber);
		west_	= new DiceSurface(westNumber);
		bottom_	= new DiceSurface(bottomNumber);
	}

	~Dice() {
		delete top_;		
		delete north_;
		delete south_;
		delete east_; 
		delete west_; 
		delete bottom_;
	}

	unsigned short getTopNumber() {
		return top_->getNumber();
	}

	void rotateNorth() {
		const DiceSurface* tmp = top_;
		top_	= south_;
		south_	= bottom_;
		bottom_	= north_;
		north_	= tmp;
	}

	void rotateSouth() {
		const DiceSurface* tmp = top_;
		top_	= north_;
		north_	= bottom_;
		bottom_	= south_;
		south_	= tmp;
	}

	void rotateEast() {
		const DiceSurface* tmp = top_;
		top_	= west_;
		west_	= bottom_;
		bottom_	= east_;
		east_	= tmp;
	}

	void rotateWest() {
		const DiceSurface* tmp = top_;
		top_	= east_;
		east_	= bottom_;
		bottom_ = west_;
		west_	= tmp;
	}

	void rotateClockwise() {
		const DiceSurface* tmp = north_;
		north_	= west_;
		west_	= south_;
		south_	= east_;
		east_	= tmp;
	}

	void rotateAnticlockwise() {
		const DiceSurface* tmp = north_;
		north_	= east_;
		east_	= south_;
		south_	= west_;
		west_	= tmp;
	}
};

int main(int, char**)
{
	const unsigned short surfaceSize = 6;
	int numbers[surfaceSize];
	for ( int i = 0; i < surfaceSize; ++i) {
		cin >> numbers[i];
	}

	Dice dice(numbers[0]	// ?????¢
			, numbers[4]	// ?????¢
			, numbers[1]	// ?????¢
			, numbers[2]	// ??±??¢
			, numbers[3]	// ?\???¢
			, numbers[5]);	// ?????¢

	string commands;
	cin >> commands;
	for ( unsigned int i = 0; i < commands.size(); ++i ) {
		char& command  = commands[i];
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
	
	cout << dice.getTopNumber() << endl;

	return 0;
}