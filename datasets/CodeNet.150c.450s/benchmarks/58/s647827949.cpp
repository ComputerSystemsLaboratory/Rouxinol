#include <bits/stdc++.h>

using namespace std;

int main(){

        stack<int> s;
        string op;
        int ans;

        while(cin >> op){

                if(op == "+"){
                        ans = s.top();
                        s.pop();
                        ans += s.top();
                        s.pop();
                        s.push(ans);
                }
                else if(op == "-"){
                        ans = s.top();
                        s.pop();
                        ans -= s.top();
                        s.pop();
                        s.push(-1 * ans);
                }
                else if(op == "*"){
                        ans = s.top();
                        s.pop();
                        ans *= s.top();
                        s.pop();
                        s.push(ans);
                }
                else s.push(atoi(op.c_str()));

        }

        cout << s.top() << endl;

}