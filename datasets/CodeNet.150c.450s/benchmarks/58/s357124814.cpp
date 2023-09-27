#include <string>
#include <stack>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    string word;
    stack<int> S;
    while(cin >> word){
        if(word == "+"){
            int x = S.top();
            S.pop();
            int y = S.top();
            S.pop();
            S.push(y + x);
        }
        else if(word == "-"){
            int x = S.top();
            S.pop();
            int y = S.top();
            S.pop();
            S.push(y - x);
        }
        else if(word == "*"){
            int x = S.top();
            S.pop();
            int y = S.top();
            S.pop();
            S.push(y * x);
        }
        else{
            int i;
            sscanf(word.c_str(), "%d", &i);
            S.push(i);
        }
    }
    printf("%d\n", S.top());
}