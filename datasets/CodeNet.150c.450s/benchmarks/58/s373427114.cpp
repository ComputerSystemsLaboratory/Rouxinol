#include<iostream>
#include<cstdlib>
using namespace std;
int mytop=-1;
struct stack1{
    int a[100000];
    bool isempty(){
        if(mytop==-1)return 1;
            return 0;
    }
    bool isfull(){
    if(mytop==100000-1)return 1;
    return 0;
    }
    int push(int x){
        if(!isfull()){
            a[++mytop]=x;
            return 1;
        }
        return 0;
    }
    int top(){
        if(isempty()){return -1;}
        return a[mytop];
    }
    int pop(){
        mytop--;
        return a[mytop+1];
    }
};
int main(){
    stack1 s;
    string a;
    int b,c;
    while(cin>>a){
        if(a[0]=='+'){
            b=s.pop();
            c=s.pop();
            s.push(b+c);
        }else
        if(a[0]=='-'){
            c=s.pop();
            b=s.pop();
            s.push(b-c);
        }else
        if(a[0]=='*'){
            b=s.pop();
            c=s.pop();
            s.push(b*c);
        }else{
            s.push(atoi(a.c_str()));
        }
    }
    cout<<s.top()<<endl;
return 0;}