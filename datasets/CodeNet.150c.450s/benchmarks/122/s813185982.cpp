#include <iostream>
#include <queue>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
    string command;
    int k;
    priority_queue<int> S;
    while(cin >> command && command != "end"){
        if(command == "insert"){
            cin >> k;
            S.push(k);
        }else if(command == "extract"){
            cout << S.top() << endl;
            S.pop();
        }
    }
}