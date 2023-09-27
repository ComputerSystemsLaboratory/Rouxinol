#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int a,tra[11]={0},i=0;
    while(cin>>a){
        if(a==0){
            cout<<s.top()<<endl;
            s.pop();
        }else{
            s.push(a);
        }
    }
}