#include<iostream>
using namespace std;
class stack{
	int row[10];
	int top;
	public:
		stack(){top = 0;}
		void push(int x);
		int pop();
};
void stack::push(int x){
	row[top] = x;
	top++;
}
int stack::pop(){
	top--;
	return row[top];
}
int main(){
	stack cars;
	int k;
	while(cin >>k){
		if(k == 0){cout<<cars.pop()<<endl;}
		else{cars.push(k);}
	}
	return 0;
}