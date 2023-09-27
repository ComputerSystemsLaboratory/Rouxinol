#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <cmath>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;

int main() {
    string str;
    int pre, pos;
    stack<int> s;
    getline(cin, str);
    istringstream is(str);
    while(is >> str){
        if(atoi(str.c_str()) != 0){
            s.push(atoi(str.c_str()));
        }
        else {
            if(str == "0"){
                s.push(atoi(str.c_str()));
                continue;
            }
            pos = s.top();
            s.pop();
            pre = s.top();
            s.pop();
            if(str == "+")
                s.push(pre + pos);
            if(str == "-")
                s.push(pre - pos);
            if(str == "*")
                s.push(pre * pos);
        }
    }

    cout << s.top() << endl;

    return 0;
}