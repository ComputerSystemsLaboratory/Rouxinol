#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

struct stack{
public:
    int top;
    int stk[10000];

    void reset(){
        top = 0;
    }
    void push(int x){
        top++;
        stk[top] = x;
    }
    int pop(){
        top--;
        return stk[top + 1];
    } 
};

int main(){
    string in;
    stack stack;
    stack.reset();
    while(true){
            cin >> in;
            if(cin.eof())
                break;
            else if(in == "+"){
                int a = stack.pop();
                int b = stack.pop();
                stack.push(a + b);
            }
            else if(in == "*"){
                int a = stack.pop();
                int b = stack.pop();
                stack.push(a * b);
            }
            else if(in == "-"){
                int a = stack.pop();
                int b = stack.pop();
                stack.push(b - a);
            }
            else{
                stack.push(atoi(in.c_str()));
            }
    }
    cout << stack.pop() << endl;
}
