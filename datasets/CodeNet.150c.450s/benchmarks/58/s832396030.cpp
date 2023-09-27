#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

class State{
    stack<int> stk;
public:
    void push(int);
    int result(){
        int r=stk.top();
        stk.pop();
        return r;
    }
};

void State::push(int c){
    //??°?????????????????????????????????????¨??????????
    int n1,n2;
    switch (c){
        case -1:
            n2=stk.top();
            stk.pop();
            n1=stk.top();
            stk.pop();
            stk.push(n1+n2);
            break;
        case -2:
            n2=stk.top();
            stk.pop();
            n1=stk.top();
            stk.pop();
            stk.push(n1-n2);
            break;
        case -3:
            n2=stk.top();
            stk.pop();
            n1=stk.top();
            stk.pop();
            stk.push(n1*n2);
            break;
        default:
            //??°???
            stk.push(c);
            break;
    }
}

int main(){
    string s;
    getline(cin,s);
    State state;
    for (int i=0,l=s.length();i<l;){
        char temp[16];
        int j=0;
        do{
            temp[j++]=s[i++];
            if (i>=l){
                break;
            }
        }while(s[i]!=' ');
        i++;
        temp[j]='\0';
        switch (temp[0]){
            case '+':
                state.push(-1);
                break;
            case '-':
                state.push(-2);
                break;
            case '*':
                state.push(-3);
                break;
            default:
                state.push(atoi(temp));
                break;
        }
    }
    cout<<state.result()<<endl;
    return 0;
}