#include <iostream>
#include <string>
#include <queue>
#include <math.h>
using namespace std;

#define ll long long

int main(){

    ll a, b;
    string op;
    queue<int> que;

    while(1){
        cin >> a >> op >> b;
        if(op == "+"){  que.push(a+b);}
        if(op == "-"){  que.push(a-b);}
        if(op == "*"){  que.push(a*b);}
        if(op == "/"){  que.push(a/b);}
        if(op == "?"){  break;}
    }

    int length = que.size();
    for(int i=0; i < length; i++){
        cout << que.front() << endl;
        que.pop();
    } 

    return 0;
}