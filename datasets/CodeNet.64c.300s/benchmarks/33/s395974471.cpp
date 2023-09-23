#include <iostream>
using namespace std;
int main() {
    int a,b,ans;
    char op;
    while(cin >> a >> op >> b) {
        if (op == '+') ans = a+b;
        else if (op == '-') ans = a-b;
        else if (op == '*') ans = a*b;
        else if (op == '/') ans = a/b;
        else break;
        cout << ans << endl;
    }
    return 0;
}