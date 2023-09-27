#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, x;
    std::string op;
    while(1){
        cin >> a >> op >> b;
        if(op == "+"){
            x = a + b;
        }
        if(op == "-"){
            x = a - b;
        }
        if(op ==  "*"){
            x = a * b;
        }
        if(op ==  "/"){
            x = a / b;
        }
        if(op ==  "?"){
            return 0;
        }
        cout << x << endl;
    }
}
