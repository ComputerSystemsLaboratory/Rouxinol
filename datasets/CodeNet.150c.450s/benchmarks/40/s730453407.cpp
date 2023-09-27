#include <iostream>
using namespace std;

class Dice{
	private:
		int temp;

	public:
		int e1,e2,e3,e4,e5,e6 = {};

		void set_eyes(int v1, int v2, int v3,
				int v4, int v5, int v6){
			e1 = v1; e2 = v2; e3 = v3;
			e4 = v4; e5 = v5; e6 = v6;
		}

		void rotate(char direction){
			switch(direction){
				case 'N':
					temp=e1;
					e1=e2; e2=e6; e6=e5; e5=temp;	
					break;
				case 'E':
					temp=e1;
					e1=e4; e4=e6; e6=e3; e3=temp;
					break;
				case 'S':
					temp=e1;
					e1=e5; e5=e6; e6=e2; e2=temp;
					break;
				case 'W':
					temp=e1;
					e1=e3; e3=e6; e6=e4; e4=temp;
					break;
			}
		}

		int return_top(){
			return e1;
		}
};

int main(){
	int v1,v2,v3,v4,v5,v6={};
	string directions;
	
	cin >>v1>>v2>>v3>>v4>>v5>>v6;
	cin >> directions;

	Dice Dice1;
	Dice1.set_eyes(v1,v2,v3,v4,v5,v6);

	for(int i=0;i<directions.length();i++){
		Dice1.rotate(directions[i]);
	}

	cout << Dice1.return_top() << endl;

	return 0;
}