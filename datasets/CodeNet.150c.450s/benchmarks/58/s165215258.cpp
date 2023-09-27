#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>

class stack
{
    int S[101], top, MAX;
public:
    stack();
	void initialize(){ top = 0; MAX = 100; }
	void push(int x){ top++; S[top] = x; }
	int pop(){ top--; return S[top + 1]; }
};

stack::stack(){}

int main()
{
    stack s = stack();
    string t;
	int a, b;
    s.initialize();

    while(cin >> t){
        if(t[0] >= '0'){
            s.push(atoi(t.c_str()));
        }else{
            b = s.pop(); a = s.pop();
            if(t[0] == '+') s.push(a + b);
            if(t[0] == '*') s.push(a * b);
            if(t[0] == '-') s.push(a - b);
        }
    };
    cout << s.pop() << endl;

    return 0;
}