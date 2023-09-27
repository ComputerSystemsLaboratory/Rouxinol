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
	void spin(){
		int t=face[1];
		face[1]=face[2];
		face[2]=face[4];
		face[4]=face[3];
		face[3]=t;
	}
};

int getRight(Dice d, int top, int front){
	for(int i=0; i<6; i++){
		for(int j=0; j<4; j++){
			if(d.face[0]==top && d.face[1]==front) return d.face[2];
			d.spin();
		}
		if(i%2==0) d.north();
		else d.east();
	}
	return -1;
}

int main(){
	int nums[6];
	Dice dice = Dice();
	for(int i=0; i<6; i++){
		cin >> dice.face[i];
	}
	int line;
	cin >> line;
	for(int i=0; i < line; i++){
		int t,f;
		cin >> t >> f;
		printf("%d\n",getRight(dice,t,f));	
	}
}
