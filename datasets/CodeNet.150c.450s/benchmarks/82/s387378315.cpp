#include <iostream>
#include <string>
using namespace std;




class DICE{
private:
	int D[6];//??????????????????
	
public:
	DICE(int*);
	int get();
	void roll(char);
	void set(int, int);
};



//???????????????????????????????????????????????????
DICE::DICE(int* number){
	
	for(int i = 0; i < 6; ++i){
		D[i] = number[i];
	}
}



//??????????????????????????????=========================================
int DICE::get(){
	
	return D[0];
}



//?????????????????¢??????===========================================
void DICE::roll(char order){
	
	int exchange;
		
	if(order == 'N'){//???????????????1????????¢??????
		exchange = D[0];
		D[0] = D[1];
		D[1] = D[5];
		D[5] = D[4];
		D[4] = exchange;
	}
		
	if(order == 'S'){//???????????????1????????¢??????
		exchange = D[0];
		D[0] = D[4];
		D[4] = D[5];
		D[5] = D[1];
		D[1] = exchange;
	}

	if(order == 'E'){//??±????????????1????????¢??????
		exchange = D[0];
		D[0] = D[3];
		D[3] = D[5];
		D[5] = D[2];
		D[2] = exchange;
	}

	if(order == 'W'){//?\?????????????1????????¢??????
		exchange = D[0];
		D[0] = D[2];
		D[2] = D[5];
		D[5] = D[3];
		D[3] = exchange;
	}
}



//??????????????´==================================================
void DICE::set(int n, int m){
	
	for(int i = 0; i < 5; ++i){
		
		if(D[0] == m)	{ break; }
		if(i % 2 == 0)	{ roll('N'); }
		if(i % 2 == 1)	{ roll('W'); }
	}
	
	roll('S');
	
	for(int i = 0; i < 3; ++i){
		
		if(D[0] == n)	{ break; }
		roll('W');
	}
}
	
	
int main(){
	
	int D[6];
	int n;
	
	for(int i = 0; i < 6; ++i){
		cin >> D[i];
	}
	
	DICE dice(D);
	
	cin >> n;
	
	for(int i = 0; i < n; ++i){
		
		int top, front;
		
		cin >> top >> front;
		
		dice.set(top, front);
		
		dice.roll('W');
		
		cout << dice.get() << endl;
	}
	
	
	
	
	return 0;
}