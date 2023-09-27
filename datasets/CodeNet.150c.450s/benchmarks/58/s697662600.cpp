#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
        stack<int> c;
        string s;
        while(cin >> s){
                if(s == "+" || s == "-" || s == "*"){
                        int x2 = c.top();
                        c.pop();
                        int x1 = c.top();
                        c.pop();
                        if(s == "+")c.push(x1+x2);
                        if(s == "-")c.push(x1-x2);
                        if(s == "*")c.push(x1*x2);
                } else {
                        c.push(stoi(s));
                }
        }
        while(!c.empty()){
                cout << c.top() << endl;
                c.pop();
        }

        return 0;
}