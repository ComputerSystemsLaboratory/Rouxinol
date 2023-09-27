#include <cstdio>
#include <iostream>

using namespace std;

struct dice{
	int q1,q2,q3,q4,q5,q6;
};

void mN(dice &d){
	int tmp=d.q1;
	d.q1=d.q2;
	d.q2=d.q6;
	d.q6=d.q5;
	d.q5=tmp;
}

void mE(dice &d){
	int tmp=d.q1;
	d.q1=d.q4;
	d.q4=d.q6;
	d.q6=d.q3;
	d.q3=tmp;
}
void mW(dice &d){
	int tmp=d.q1;
	d.q1=d.q3;
	d.q3=d.q6;
	d.q6=d.q4;
	d.q4=tmp;
}
void mS(dice &d){
	int tmp=d.q1;
	d.q1=d.q5;
	d.q5=d.q6;
	d.q6=d.q2;
	d.q2=tmp;
}

void spin(dice &d){
	int tmp=d.q2;
	d.q2=d.q3;
	d.q3=d.q5;
	d.q5=d.q4;
	d.q4=tmp;
}

int main(){
	dice z;
	int q;
	
	scanf(" %d %d %d %d %d %d", &z.q1, &z.q2, &z.q3, &z.q4, &z.q5, &z.q6);
	scanf(" %d", &q);
	
	for(int i=0; i<q; ++i){
		int a, b;
		dice x=z;
		
		scanf(" %d %d", &a, &b);
		
		if(a==x.q3 || a==x.q4) mE(x);
		while(a != x.q1) 
			mN(x);
		while(b != x.q2)
			spin(x);
		
		printf("%d\n", x.q3);	
	}
	
	return 0;
}