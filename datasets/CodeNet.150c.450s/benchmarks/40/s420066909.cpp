#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>

using namespace std;


class DICE
{
private:
	void swapMap(string a, string b);
public:
	map<string,int> dice;
	DICE(vector<int> &v);
	~DICE();
	void turnDice(char c);
	void printDice();
};

DICE::DICE(vector<int> &v){
	dice["top"] = v[0];
	dice["front"] = v[1];
	dice["right"] = v[2];
	dice["left"] = v[3];
	dice["back"] = v[4];
	dice["bottom"] = v[5];
}

DICE::~DICE(){
	
}

void DICE::swapMap(string a, string b){
	if(dice.end() == dice.find(a) || dice.end() == dice.find(b)) return;
	int tmp;
	tmp = dice[a];
	dice[a] = dice[b];
	dice[b] = tmp;
}

void DICE::turnDice(char c){
	switch(c){
		case 'N':
			swapMap("top","back");
			swapMap("top","bottom");
			swapMap("top","front");
			break;
		case 'E':
			swapMap("top","right");
			swapMap("top","bottom");
			swapMap("top","left");
			break;
		case 'S':
			swapMap("top","front");
			swapMap("top","bottom");
			swapMap("top","back");
			break;
		case 'W':
			swapMap("top","left");
			swapMap("top","bottom");
			swapMap("top","right");
			break;
		default :
			break;
	}
}

void DICE::printDice(){
	cout << dice["top"] << endl;
}

int main(){
	vector<int> v;
	string cmd;
	for(int i = 0; i < 6; i++){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	cin >> cmd;

	DICE data(v);
	for(int i = 0; i < cmd.size(); i++)
		data.turnDice(cmd[i]);
	data.printDice();
}