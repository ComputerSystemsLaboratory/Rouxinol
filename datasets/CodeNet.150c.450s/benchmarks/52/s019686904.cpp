#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main(void){
    int i,j,d;
    stack<int> train;
    while(cin >> d){
        if(d==0){
            cout << train.top() << endl;
            train.pop();
        }
        else train.push(d);
    }
    return 0;
}