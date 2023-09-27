#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

class calculation{
private:
	int top;
	int *s;
public:
	calculation();
	~calculation();
	void push(int x);
	int pop();
};

calculation::calculation(){
	s = new int[1000];
	top = 0;
}

calculation::~calculation(){
	delete [] s;
}

void calculation::push(int x){
	s[++top] = x;
}

int calculation::pop(){
	top--;
	return s[top+1];
}

int main()
{
	char str[100];
	int a,b;
	calculation mycalculation;

	while( scanf("%s",str)!=EOF ){
		if(str[0]=='+'){
			a = mycalculation.pop();
			b = mycalculation.pop();
			mycalculation.push(a+b);
		}else if(str[0]=='-'){
			a = mycalculation.pop();
			b = mycalculation.pop();
			mycalculation.push(b-a);
		}else if(str[0]=='*'){
			a = mycalculation.pop();
			b = mycalculation.pop();
			mycalculation.push(a*b);
		}else{
			mycalculation.push(atoi(str));
		}
	}

	cout<<mycalculation.pop()<<endl;

	return 0;
}