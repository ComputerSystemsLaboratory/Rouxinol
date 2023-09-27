#include <iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

class Dice{
	public:
	int diceside[6];
	char instruct[100];
	
	void Show();
	void Move();
	void Whatright();
};

//---------------------------------------------------------

void Dice::Show(){
    for(int i=0;i<6;i++){
        cout<<diceside[i]<<endl;
    }
}

//---------------------------------------------------------

void Dice::Move(){
	
	int d1;
	int d2;
	int d3;
	int d4;
	int d5;
	int d6;
	
//	char instruct[100];
//	cin>>instruct;

	
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
	
//	cout<<diceside[0]<<endl;
}

//-------------------------------------------------------------------

void Dice::Whatright(){
	int Qnum;
	int A=0;
	int X,Y;
	cin>>Qnum;

	for(int i=0;i<Qnum;i++){
		cin>>X>>Y;
		if(X==diceside[0]){sprintf(instruct,"%s","\0");}
		else if(X==diceside[1]){sprintf(instruct,"%s","N");}
		else if(X==diceside[2]){sprintf(instruct,"%s","W");}
		else if(X==diceside[3]){sprintf(instruct,"%s","E");}
		else if(X==diceside[4]){sprintf(instruct,"%s","S");}
		else if(X==diceside[5]){sprintf(instruct,"%s","NN");}
		
		Move();
		
		if(Y==diceside[1]){A=diceside[2];}
		else if(Y==diceside[2]){A=diceside[4];}
		else if(Y==diceside[3]){A=diceside[1];}
		else if(Y==diceside[4]){A=diceside[3];}
		
		cout<<A<<endl;
	}
	
	
}

//-------------------------------------------------------------------

int main(void){
	
	int imput;
	Dice dice1;
	for(int i=0;i<6;i++){
		cin>>imput;
		dice1.diceside[i]=imput;
	}
	
	
	dice1.Whatright();
	


	
}