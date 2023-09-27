#include <iostream>
using namespace std;

class Dice{
	public:
		Dice(int in[]);
		void rotate(char d);
		int getTop();
	private:
		int *nums;
		//according to description, not use num[0]
		static int rotation[4][6];
		//N, W, S, E
		//new_nums[i] = old_nums[rotation[dir][i]]
};

Dice::Dice(int in[]){
	nums = new int[7];
	for(int i=1;i<=6;i++){
		nums[i]=in[i];
	}
}

int Dice::getTop(){
	return nums[1];
}

int Dice::rotation[4][6] = 
{{2, 6, 3, 4, 1, 5}, //N
 {3, 2, 6, 1, 5, 4}, //W
 {5, 1, 3, 4, 6, 2}, //S
 {4, 2, 1, 6, 5, 3}};//E

void Dice::rotate(char d){
	int dir;
	switch(d){
	case 'N': dir=0; break;
	case 'W': dir=1; break;
	case 'S': dir=2; break;
	case 'E': dir=3; break;
	}

	int *new_nums = new int[7];
	for (int i=1; i<=6; i++){
		new_nums[i] = nums[rotation[dir][i-1]];
	}
	delete [] nums;
	nums = new_nums;
}

int main(){
	int in[7];
	for(int i=1;i<=6;i++){
		cin >> in[i];
	}
	Dice d1(in);

	char dir;
	while( cin >> dir ){
		d1.rotate(dir);
	}
	cout << d1.getTop() << endl;
}