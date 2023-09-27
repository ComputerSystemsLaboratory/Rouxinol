#include <iostream>
#include <map>
#include <string>

using namespace std;

class Dice {
	private:
		map<char, int> dice;

	public:
		Dice(int _I, int _II, int _III, int _IV, int _V, int _VI);
		int GetNumber(char c);
		void roll_E();
		void roll_N();
		void roll_S();
		void roll_W();
};

Dice::Dice(int _I, int _II, int _III, int _IV, int _V, int _VI) {
	dice['T'] = _I;
	dice['S'] = _II;
	dice['E'] = _III;
	dice['W'] = _IV;
	dice['N'] = _V;
	dice['B'] = _VI;
}

int Dice::GetNumber(char c) {
	return dice[c];
}

void Dice::roll_E() {
	map<char, int> tmp = dice;	
	dice['T'] = tmp['W'];
	dice['E'] = tmp['T'];
	dice['W'] = tmp['B'];
	dice['B'] = tmp['E'];
}

void Dice::roll_N() {
	map<char, int> tmp = dice;	
	dice['T'] = tmp['S'];
	dice['S'] = tmp['B'];
	dice['N'] = tmp['T'];
	dice['B'] = tmp['N'];
}

void Dice::roll_S() {
	map<char, int> tmp = dice;	
	dice['T'] = tmp['N'];
	dice['S'] = tmp['T'];
	dice['N'] = tmp['B'];
	dice['B'] = tmp['S'];
}

void Dice::roll_W() {
	map<char, int> tmp = dice;	
	dice['T'] = tmp['E'];
	dice['E'] = tmp['B'];
	dice['W'] = tmp['T'];
	dice['B'] = tmp['W'];
}

int main() {
	int I, II, III, IV, V, VI;
	cin >> I >> II >> III >> IV >> V >> VI;
	Dice dice(I, II, III, IV, V, VI);

	string op;
	cin >> op;
	for (unsigned int i = 0; i < op.size(); i++) {
		if (op[i] == 'E') {
			dice.roll_E();
		}
		if (op[i] == 'N') {
			dice.roll_N();
		}
		if (op[i] == 'S') {
			dice.roll_S();
		}
		if (op[i] == 'W') {
			dice.roll_W();
		}
	}
	cout << dice.GetNumber('T') << endl;
	// std::cout << "\e[38;5;0m\e[48;5;40m --- end ---  \e[m" << std::endl; // debug
	return 0;
}

