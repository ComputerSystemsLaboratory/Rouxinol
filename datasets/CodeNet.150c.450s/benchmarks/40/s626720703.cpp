#include<iostream>
#include<cctype>
#include<string>

class Dice{
  public:
	int face[6];
	Dice(){}
	
	void move_s(){
		int t;
		t = face[0]; face[0] = face[4]; face[4] = face[5]; face[5] = face[1]; face[1] = t;
	}
	void move_e(){
		int t;
		t = face[0]; face[0] = face[3]; face[3] = face[5]; face[5] = face[2]; face[2] = t;
	}
};

int main(){
	Dice d;
	std::string ord;
	
	for(int i=0; i <=5; i++){
		std::cin >> d.face[i];
	}
	
	std::cin >> ord;
	
	for(int i=0; i<ord.size() ; i++){
		if(ord[i] == 'S'){d.move_s();}
		else if(ord[i] == 'E'){d.move_e();}
		else if(ord[i] == 'N'){for (int j = 0; j < 3; j++){d.move_s();}}
		else{for (int j = 0; j < 3; j++){d.move_e();}}
	}
	std::cout << d.face[0] << std::endl;
	
	return 0;
}