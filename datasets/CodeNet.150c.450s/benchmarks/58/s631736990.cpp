#include <iostream>
#include <stack>
#include <cstdlib>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    /* code */
    stack <int> n;
    int a,b;
    string s;
    while(cin>>s){
        if(s=="+"){
            a=n.top();
            n.pop();
            b=n.top();
            n.pop();
            n.push(a+b);
        }
        else if(s=="-"){
            a=n.top();
            n.pop();
            b=n.top();
            n.pop();

            n.push(b-a);
        }
        else if(s=="*"){
            a=n.top();
            n.pop();
            b=n.top();
            n.pop();
            n.push(a*b);
        }
        else{
            n.push(atoi(s.c_str()));
        }
    }
    cout << n.top() <<endl;
    return 0;
}