/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A&lang=jp*/
#include <iostream>
#include <stack>
#include <stdexcept>

using namespace std;

int calc(stack<string> *s){
    if((*s).size()>1) {
        string opr = (*s).top();
        (*s).pop();
        int opt[2];
        for (int j = 0; j < 2; j++) {
            try {
                opt[j] = stoi((*s).top());
            }catch(invalid_argument e){
                opt[j] = calc(s);
            }
            (*s).pop();
        }
        if (opr == "+") {
            (*s).push(to_string(opt[1] + opt[0]));
        } else if (opr == "-") {
            (*s).push(to_string(opt[1] - opt[0]));
        } else if (opr == "*") {
            (*s).push(to_string(opt[1] * opt[0]));
        } else if (opr == "/") {
            (*s).push(to_string(opt[1] / opt[0]));
        }
        return stoi((*s).top());
    }
    return 0;
}

int main(){
    stack<string> s;
    while(cin.peek()!='\n'){
        string i;
        cin >> i;
        s.push(i);
    }
    cout<<calc(&s)<<endl;
    return 0;
}