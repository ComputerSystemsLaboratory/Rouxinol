#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

class Dice{
public:
	int face[6];
	Dice(){}
	void north(){
		int t=face[0];
		face[0]=face[1];
		face[1]=face[5];
		face[5]=face[4];
		face[4]=t;
	}
	void south(){
		int t=face[0];
		face[0]=face[4];
		face[4]=face[5];
		face[5]=face[1];
		face[1]=t;
	}
	void east(){
		int t=face[0];
		face[0]=face[3];
		face[3]=face[5];
		face[5]=face[2];
		face[2]=t;
	}
	void west(){
		int t=face[0];
		face[0]=face[2];
		face[2]=face[5];
		face[5]=face[3];
		face[3]=t;
	}
};

int main(){
	int nums[6];
	Dice dice = Dice();
	for(int i=0; i<6; i++){
		cin >> dice.face[i];
	}
	string order;
	cin >> order;
	for(int i=0; i < order.size(); i++){
		if(order[i]=='N'){
			dice.north();
		}else if(order[i]=='S'){
			dice.south();
		}else if(order[i]=='E'){
			dice.east();
		}else if(order[i]=='W'){
			dice.west();
		}
	}

	printf("%d\n",dice.face[0]);
}
