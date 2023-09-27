#include <iostream>
#include <array> 
using namespace std;

class Dice{
	private:
		int temp;

	public:
		array<int,7> d;

		void set_eyes(int v1, int v2, int v3,
				int v4, int v5, int v6){
			d[1] = v1; d[2] = v2; d[3] = v3;
			d[4] = v4; d[5] = v5; d[6] = v6;
		}

		void rotate(char direction){
			switch(direction){
				case 'N':
					temp=d[1];
					d[1]=d[2]; d[2]=d[6]; d[6]=d[5]; d[5]=temp;	
					break;
				case 'E':
					temp=d[1];
					d[1]=d[4]; d[4]=d[6]; d[6]=d[3]; d[3]=temp;
					break;
				case 'S':
					temp=d[1];
					d[1]=d[5]; d[5]=d[6]; d[6]=d[2]; d[2]=temp;
					break;
				case 'W':
					temp=d[1];
					d[1]=d[3]; d[3]=d[6]; d[6]=d[4]; d[4]=temp;
					break;
			}
		}

		int return_top(){
			return d[1];
		}

		int return_front(){
			return d[2];
		}

		int return_right(){
			return d[3];
		}
};


int main(){
	int v1,v2,v3,v4,v5,v6={};
	int n;
	int t, f = {}; //top and front
	string directions;
	
	cin >>v1>>v2>>v3>>v4>>v5>>v6;
	cin >> n;

	Dice Dice1;

	for(int i=0;i<n;i++){
		Dice1.set_eyes(v1,v2,v3,v4,v5,v6);
		cin >> t >> f;

		while(Dice1.return_top() != t || Dice1.return_front() != f){
				for(int s=0; s<5; s++){
					if(Dice1.return_top() == t && Dice1.return_front() == f)
						break;
					Dice1.rotate('N');
				}
				for(int s=0; s<5; s++){
					if(Dice1.return_top() == t && Dice1.return_front() == f)
						break;
					Dice1.rotate('E');
				}
				for(int s=0; s<5; s++){
					if(Dice1.return_top() == t && Dice1.return_front() == f)
						break;
					Dice1.rotate('S');
				}
				for(int s=0; s<5; s++){
					if(Dice1.return_top() == t && Dice1.return_front() == f)
						break;
					Dice1.rotate('W');
				}
		}
		cout << Dice1.return_right() << endl;

	}

	return 0;
}