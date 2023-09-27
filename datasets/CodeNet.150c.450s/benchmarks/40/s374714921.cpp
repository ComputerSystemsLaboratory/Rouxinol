#include<iostream>
#include<string>

using namespace std;

struct Dice{
	int P[6];
	void Roll(char a){
		
	int top;
	
	switch(a) {
		
		case 'E':
		top = P[0];
		P[0] = P[3];
		P[3] = P[5];
		P[5] = P[2];
		P[2] = top;
		break;
		
		case 'W':
		top = P[0];
		P[0] = P[2];
		P[2] = P[5];
		P[5] = P[3];
		P[3] = top;
		break;
		
		case 'S':
		top = P[0];
		P[0] = P[4];
		P[4] = P[5];
		P[5] = P[1];
		P[1] = top;
		break;
		
		default :
		top = P[0];
		P[0] = P[1];
		P[1] = P[5];
		P[5] = P[4];
		P[4] = top;
		break;	
	}
	
}
};

void Roll(char a, Dice S);

int main() {
	
	int n = 6;
	Dice S;
	
	while( cin >> S.P[0] ) {
		
		for(int i=1;i<n;i++)
		cin >> S.P[i];
		
		string Action;
		cin >> Action;
		
		for(int i=0;i<Action.length();i++)
		S.Roll(Action[i]);
		
		cout << S.P[0] << "\n";
		
	}
	
	return 0;
}

