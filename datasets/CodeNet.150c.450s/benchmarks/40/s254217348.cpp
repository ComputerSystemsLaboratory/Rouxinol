#include <iostream>
#include<cstdlib>
using namespace std;

class Dice{
	public:
	int diceside[6];
	char instruct[100];
	
	void Show();
	void Move();
	};

	
void Dice::Show(){
    for(int i=0;i<6;i++){
        cout<<diceside[i]<<endl;
    }
}

void Dice::Move(){
	
	int d1;
	int d2;
	int d3;
	int d4;
	int d5;
	int d6;
	
	for(int i=0;instruct[i]!='\0';i++){
		d1=diceside[0];
		d2=diceside[1];
		d3=diceside[2];
		d4=diceside[3];
		d5=diceside[4];
		d6=diceside[5];
		
		switch(instruct[i]){
			case 'N':
			diceside[0]=d2;
			diceside[1]=d6;
			diceside[2]=d3;
			diceside[3]=d4;
			diceside[4]=d1;
			diceside[5]=d5;break;
			
			case 'E':
			diceside[0]=d4;
			diceside[1]=d2;
			diceside[2]=d1;
			diceside[3]=d6;
			diceside[4]=d5;
			diceside[5]=d3;break;
			
			case 'W':
			diceside[0]=d3;
			diceside[1]=d2;
			diceside[2]=d6;
			diceside[3]=d1;
			diceside[4]=d5;
			diceside[5]=d4;break;
			
			case 'S':
			diceside[0]=d5;
			diceside[1]=d1;
			diceside[2]=d3;
			diceside[3]=d4;
			diceside[4]=d6;
			diceside[5]=d2;break;
    	}
	}
	
	cout<<diceside[0]<<endl;
}


//-------------------------------------------------------------------

int main(void){
	
	int imput;
	Dice dice1;
	for(int i=0;i<6;i++){
		cin>>imput;
		dice1.diceside[i]=imput;
	}
	
	cin>>dice1.instruct;
	
	dice1.Move();
	


	
}