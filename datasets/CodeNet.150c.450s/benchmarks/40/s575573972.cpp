#include<iostream>
using namespace std;

class Dice{
	int _num[6];
	public:
		void set(int num[6]){
			for(int i = 0; i < 6; i++) _num[i] = num[i];
		}
		void N(){
			swap(_num[0],_num[4]);
			swap(_num[0],_num[5]);
			swap(_num[0],_num[1]);
		}
		void S(){
			swap(_num[0],_num[1]);
			swap(_num[0],_num[5]);
			swap(_num[0],_num[4]);
		}
		void W(){
			swap(_num[0],_num[3]);
			swap(_num[0],_num[5]);
			swap(_num[0],_num[2]);
		}
		void E(){
			swap(_num[0],_num[2]);
			swap(_num[0],_num[5]);
			swap(_num[0],_num[3]);
		}
		void printTop(){
			cout << _num[0] << endl;
		}
};

int main(){
	int num[6];
	for(int i = 0; i < 6; i++) cin >> num[i];
	
	Dice d;
	d.set(num);
	
	string cmd;
	cin >> cmd;
	
	while(cmd.size() > 0){
		char c = cmd[0];
		cmd = cmd.substr(1);
		switch(c){
			case('N'): 
				d.N(); break;
			case('S'): 
				d.S(); break;
			case('W'):
				d.W(); break;
			case('E'):
				d.E(); break;
		}
	}
	d.printTop();
}