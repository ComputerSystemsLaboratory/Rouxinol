#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
        int a,b;
        char op;
        while(1){
                int ans;
                cin >> a >> op >> b;
                if (op == '?') break;
                if (op == '+') ans = a + b;
                if (op == '-') ans = a - b;
                if (op == '/') ans = a / b;
                if (op == '*') ans = a * b;
                cout << ans << "\n";
        }
        return 0;
}