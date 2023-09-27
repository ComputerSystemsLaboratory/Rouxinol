#include <iostream>
#include <iomanip>
#include <string>
 
using namespace std;
 
int main(void){
    while (true){
        int a, b, ans;
        string op;
        cin >> a >> op >> b;
            if (op == "?") break;
        if (op == "+"){
            ans = a + b;
        }
        else if (op == "-"){
            ans = a - b;
        }
        else if (op == "*"){
            ans = a * b;
        }
        else if (op == "/"){
            ans = a / b;
        }
        cout << ans << endl;
    }
    return 0;
}