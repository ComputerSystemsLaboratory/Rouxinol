#include <iostream>
#include <string>
using namespace std;

class Dice{
public:
	int l1,l2,l3,l4,l5,l6;
	
	void East(){
		int t = l1;
		l1 = l4;
		l4 = l6;
		l6 = l3;
		l3 = t;
	}
	void West(){
		int t = l1;
		l1 = l3;
		l3 = l6;
		l6 = l4;
		l4 = t;
	}
	void South(){
		int t=l1;
		l1 = l5;
		l5 = l6;
		l6 = l2;
		l2 = t;
	}
	void North(){
		int t=l1;
		l1 = l2;
		l2 = l6;
		l6 = l5;
		l5 = t;
	}
};

int main() {
	
	Dice dice;
	int l1,l2,l3,l4,l5,l6;
	char d;
	
	cin>>l1>>l2>>l3>>l4>>l5>>l6;
	dice.l1 = l1;
	dice.l2 = l2;
	dice.l3 = l3;
	dice.l4 = l4;
	dice.l5 = l5;
	dice.l6 = l6;
	
	while(cin>>d){
		if(d=='E')dice.East();
		else if(d=='W')dice.West();
		else if(d=='S')dice.South();
		else dice.North();
	}
	
	cout<<dice.l1<<endl;
}