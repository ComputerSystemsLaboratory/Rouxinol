#include <iostream>
#include <cstdio>
using namespace std;
int a,b,c,d,x,y,r[100]={};

struct Dice{
	int d1;
	int d2;
	int d3;
	int d4;
	int d5;
	int d6;
};

int main(){
	struct Dice da;
	int s;
	cin >> da.d1 >> da.d2 >> da.d3 >> da.d4 >> da.d5 >> da.d6;
	cin >> s;
	for(int i=0;i<s;i++){
	cin >> x >> y;
	if((x==da.d1&&y==da.d2)||(x==da.d2&&y==da.d6)||(x==da.d6&&y==da.d5)||(x==da.d5&&y==da.d1)){
		r[i]=da.d3;
	}else if((x==da.d1&&y==da.d3)||(x==da.d3&&y==da.d6)||(x==da.d6&&y==da.d4)||(x==da.d4&&y==da.d1)){
		r[i]=da.d5;
	}else if((x==da.d1&&y==da.d5)||(x==da.d5&&y==da.d6)||(x==da.d6&&y==da.d2)||(x==da.d2&&y==da.d1)){
		r[i]=da.d4;
	}else if((x==da.d1&&y==da.d4)||(x==da.d4&&y==da.d6)||(x==da.d6&&y==da.d3)||(x==da.d3&&y==da.d1)){
		r[i]=da.d2;
	}else if((x==da.d3&&y==da.d5)||(x==da.d5&&y==da.d4)||(x==da.d4&&y==da.d2)||(x==da.d2&&y==da.d3)){
		r[i]=da.d1;
	}else if((x==da.d3&&y==da.d2)||(x==da.d2&&y==da.d4)||(x==da.d4&&y==da.d5)||(x==da.d5&&y==da.d3)){
		r[i]=da.d6;
	}
	}
	for(int i=0;i<s;i++)cout << r[i] << endl;
	return 0;
}