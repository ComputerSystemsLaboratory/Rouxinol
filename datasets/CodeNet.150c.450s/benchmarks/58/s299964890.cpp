#include<iostream>
#include<cstdlib>
#include<stack>

using namespace std;

int main(){
    string t;
    stack<int> s;
    while(cin >> t){
        if(t == "+"){
            int s1 = s.top();
            s.pop();
            int s2 = s.top();
            s.pop();
            s.push(s1 + s2);
        } else if(t == "*"){
            int s1 = s.top();
            s.pop();
            int s2 = s.top();
            s.pop();
            s.push(s1 * s2);
        } else if(t == "-"){
            int s1 = s.top();
            s.pop();
            int s2 = s.top();
            s.pop();
            s.push(s2 - s1);
        } else{
            s.push(atoi(t.c_str()));
        }
    }
    cout << s.top() << endl;
    return 0;
}