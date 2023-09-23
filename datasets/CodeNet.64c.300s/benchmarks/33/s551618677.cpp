#include <bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int a, b; char op;
        cin >> a >> op >> b;
        if(op == '?') break;
        int ans;
        if(op == '+') ans = a + b;
        if(op == '-') ans = a - b;
        if(op == '*') ans = a * b;
        if(op == '/') ans = a / b;
        cout << ans << endl;
    }
}
