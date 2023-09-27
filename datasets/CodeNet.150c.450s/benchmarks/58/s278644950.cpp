#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
using namespace std;

int main(void){
    string s;
    int n1,n2;
    stack<int> Q;
    while (cin >> s) {
        if (s == "+"){
            n1 = Q.top();
            Q.pop();
            n2 = Q.top();
            Q.pop();
            Q.push(n1+n2);
        } else if (s == "-"){
            n1 = Q.top();
            Q.pop();
            n2 = Q.top();
            Q.pop();
            Q.push(n2-n1);
        } else if (s == "*"){
            n1 = Q.top();
            Q.pop();
            n2 = Q.top();
            Q.pop();
            Q.push(n1*n2);
        } else {
            Q.push(atoi(s.c_str()));
            
        }
    }
    cout << Q.top()<< endl;
    return 0;
}