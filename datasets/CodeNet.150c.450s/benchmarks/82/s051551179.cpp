#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class Dice{
	public:
		int label[6];
		void Command(char hougaku);
};

void Dice::Command(char hougaku){
	int temp[6];
	for(int i = 0; i < 6; i++){
		temp[i] = label[i];
	}
	if(hougaku == 'E'){
		label[0] = temp[3];
		label[2] = temp[0];
		label[3] = temp[5];
		label[5] = temp[2];
	}
	else if(hougaku == 'W'){
		label[0] = temp[2];
		label[2] = temp[5];
		label[3] = temp[0];
		label[5] = temp[3];
	}
	else if(hougaku == 'N'){
		label[0] = temp[1];
		label[1] = temp[5];
		label[4] = temp[0];
		label[5] = temp[4];
	}
	else if(hougaku == 'S'){
		label[0] = temp[4];
		label[1] = temp[0];
		label[4] = temp[5];
		label[5] = temp[1];
	}
}

int main(){
	Dice dice;
	for(int i = 0; i < 6; i++){
		cin >> dice.label[i];
	}
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		int a, b;
		cin >> a >> b;
		if(dice.label[0] == a && dice.label[1] == b){
			cout << dice.label[2] << endl;
			continue;
		}
		
		while(1){
			double x = (double)rand() / RAND_MAX;
			if(x < 0.25){
				dice.Command('E');
			}
			else if(x < 0.50){
				dice.Command('W');
			}
			else if(x < 0.75){
				dice.Command('N');
			}
			else{
				dice.Command('S');
			}
			if(dice.label[0] == a && dice.label[1] == b){
				cout << dice.label[2] << endl;
				break;
			}
		}
	}
	
	return 0;
}