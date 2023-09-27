#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

int _stoi(string s) {
    return atoi(s.c_str());
}

int popValue(stack<int> *S) {
    int retVal = S->top();
    S->pop();
    return retVal;
}

int main(int argc, const char * argv[]) {
    stack<int> S;
    string s;
    
    while(cin >> s){
        if (s[0] == '+') {
            S.push(popValue(&S) + popValue(&S));
        } else if (s[0] == '-') {
            S.push(popValue(&S) * -1);
            S.push(popValue(&S) + popValue(&S));
        } else if (s[0] == '*') {
            S.push(popValue(&S) * popValue(&S));
        } else {
            S.push(_stoi(s));
        }
    }

    cout << S.top() << endl;
    
    return 0;
}