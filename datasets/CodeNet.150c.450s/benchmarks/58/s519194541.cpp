#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
using namespace std;

stack<string> a;
int main(int argc, const char * argv[]) {
    //freopen("/Users/mac/Desktop/C++?¨????/test/test.txt", "r", stdin);
    string tem;
    while(cin>>tem){
        if (tem=="+") {
            string s1=a.top();
            a.pop();
            string s2=a.top();
            a.pop();
            int t=stoi(s1)+stoi(s2);
            string s=to_string(t);
            a.push(s);
        }
        else if (tem=="-") {
            string s1=a.top();
            a.pop();
            string s2=a.top();
            a.pop();
            int t=stoi(s2)-stoi(s1);
            string s=to_string(t);
            a.push(s);
        }
        else if (tem=="*") {
            string s1=a.top();
            a.pop();
            string s2=a.top();
            a.pop();
            int t=stoi(s1)*stoi(s2);
            string s=to_string(t);
            a.push(s);
        }
        else if (tem=="/") {
            string s1=a.top();
            a.pop();
            string s2=a.top();
            a.pop();
            int t=stoi(s2)/stoi(s1);
            string s=to_string(t);
            a.push(s);
        }
        else{
            a.push(tem);
        }
    }
    cout<<a.top()<<endl;
    return 0;
}