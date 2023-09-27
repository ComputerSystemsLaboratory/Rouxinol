#include <cstdio>
#include <iostream>

using namespace std;

struct Dice{
	int q1,q2,q3,q4,q5,q6;
};

int main(){
	Dice d;
	char od;
	
	scanf("%d %d %d %d %d %d", &d.q1, &d.q2, &d.q3, &d.q4, &d.q5, &d.q6);
	
	while( scanf("%c", &od) != EOF ){
		if(od=='N'){
			int tmp=d.q1;
			d.q1=d.q2;
			d.q2=d.q6;
			d.q6=d.q5;
			d.q5=tmp;
		}
		else if(od=='E'){
			int tmp=d.q1;
			d.q1=d.q4;
			d.q4=d.q6;
			d.q6=d.q3;
			d.q3=tmp;
		}
		else if(od=='W'){
			int tmp=d.q1;
			d.q1=d.q3;
			d.q3=d.q6;
			d.q6=d.q4;
			d.q4=tmp;
		}
		else if(od=='S'){
			int tmp=d.q1;
			d.q1=d.q5;
			d.q5=d.q6;
			d.q6=d.q2;
			d.q2=tmp;
		}
	}
	
	printf("%d\n", d.q1);
	
	return 0;
}