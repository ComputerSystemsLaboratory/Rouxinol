#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>

class stack
{
    int S[101], top, MAX;
public:
    stack();
	void initialize(){ top = 0; MAX = 101; }
	bool isFull(){ return top >= MAX - 1; }
	bool isEmpty(){return top == 0; }
    void push(int);
    int pop();
};

stack::stack(){}

void stack::push(int x)
{
    if(isFull()){
        cout << "overflow" << endl;
        return;
    }
    top++;
    S[top] = x;
}

int stack::pop()
{
    if(isEmpty()){
        cout << "underflow" << endl;
        return -1;
    }
    top--;
    return S[top + 1];
}

int main()
{
    stack s = stack();
    string t;
    s.initialize();
    int a, b;

    while(cin >> t){
        if(t == "EOF") break;
        if(t[0] >= '0'){
            s.push(atoi(t.c_str()));
        }else{
            b = s.pop();
            a = s.pop();
            if(t[0] == '+') s.push(a + b);
            if(t[0] == '*') s.push(a * b);
            if(t[0] == '-') s.push(a - b);
        }
    };
    cout << s.pop() << endl;

    return 0;
}