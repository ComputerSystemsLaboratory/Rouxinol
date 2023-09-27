#include <iostream>
#include <cstdio>
using namespace std;
int a,b,c,d,roll;

struct Dice{
	int d1;
	int d2;
	int d3;
	int d4;
	int d5;
	int d6;
};

void N(struct Dice *std){
	a=(*std).d1;
	b=(*std).d2;
	c=(*std).d6;
	d=(*std).d5;
	(*std).d1=b;
	(*std).d2=c;
	(*std).d6=d;
	(*std).d5=a;
}
void S(struct Dice *std){
	a=(*std).d1;
	b=(*std).d2;
	c=(*std).d6;
	d=(*std).d5;
	(*std).d1=d;
	(*std).d2=a;
	(*std).d6=b;
	(*std).d5=c;
}
void W(struct Dice *std){
	a=(*std).d1;
	b=(*std).d4;
	c=(*std).d6;
	d=(*std).d3;
	(*std).d1=d;
	(*std).d4=a;
	(*std).d6=b;
	(*std).d3=c;
}
void E(struct Dice *std){
	a=(*std).d1;
	b=(*std).d4;
	c=(*std).d6;
	d=(*std).d3;
	(*std).d1=b;
	(*std).d4=c;
	(*std).d6=d;
	(*std).d3=a;
}

int main(){
	struct Dice da;
	char s;
	cin >> da.d1 >> da.d2 >> da.d3 >> da.d4 >> da.d5 >> da.d6;
	while(scanf("%c",&s)!=EOF){
		if(s=='N'){
			N(&da);
		}else if(s=='S'){
			S(&da);
		}else if(s=='W'){
			W(&da);
		}else if(s=='E'){
			E(&da);
		}
	}
	cout << da.d1 << endl;
	return 0;
}