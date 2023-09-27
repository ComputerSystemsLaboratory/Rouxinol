#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
    int a,b;
    char op;
    while(true){
        cin >> a >> op >> b;
        fflush(stdin);
        if (op =='?') return 0;
        else if (op =='+') cout << a+b << endl;
        else if (op =='-') cout << a-b << endl;
        else if (op =='/') cout << a/b << endl;
        else if (op =='*') cout << a*b << endl;
    }
}