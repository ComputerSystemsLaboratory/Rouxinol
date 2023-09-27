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
	int q;
	int fr,up;
	int i;
	
	cin>>l1>>l2>>l3>>l4>>l5>>l6;
	dice.l1 = l1;
	dice.l2 = l2;
	dice.l3 = l3;
	dice.l4 = l4;
	dice.l5 = l5;
	dice.l6 = l6;
	
	for(cin>>q,i=0;i<q;++i){
		cin>>up>>fr;
		
		if(dice.l1 == fr)dice.South();
		else if(dice.l6 == fr)dice.North();
		else if(dice.l5 == fr){dice.North();dice.North();}
		else if(dice.l3 == fr){dice.West();dice.South();}
		else if(dice.l4 == fr){dice.East();dice.South();}
		
		if(dice.l3 == up)dice.West();
		else if(dice.l4 == up)dice.East();
		else if(dice.l6 == up){dice.East();dice.East();}
		
		cout<<dice.l3<<endl;
	}
}