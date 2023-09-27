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
		
		case 'R':
		top = P[1];
		P[1] = P[2];
		P[2] = P[4];
		P[4] = P[3];
		P[3] = top;
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
	int Top() {
    return P[0];
  }
  	int Right(){
    return P[2];
  }
  	int Left(){
    return P[3];
  }
  	int Front(){
    return P[1];
  }
};

int main() {
	
	int n = 6;
	Dice S;
	
	while( cin >> S.P[0] ) {
		
		for(int i=1;i<n;i++)
		cin >> S.P[i];
		
		int n;
		cin >> n;
		
		int a, b;
		
		for(int i=0;i<n;i++){
		cin >> a >> b;
		if(S.Left()==a) S.Roll('E');
		
    	if(S.Right()==a) S.Roll('W');
    	
    	while(S.Top()!=a) S.Roll('N');
    	
    	while(S.Front()!=b) S.Roll('R');
    	
    	cout << S.Right() << "\n";	

	}
	}
	
	return 0;
}

