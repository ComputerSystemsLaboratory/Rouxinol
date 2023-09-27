#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> A;
    vector<char> OP;
    vector<int> B;

    for(;;){
        int a, b;
        char op;
        cin >> a;
        cin >> op;
        cin >> b;
        if(op == '?') break;
        A.push_back(a);
        OP.push_back(op);
        B.push_back(b);
    }

    for(int i = 0; i < A.size(); i++){
        int a = A.at(i), b = B.at(i);
        switch(OP.at(i)){
            case '+': cout << a + b << endl; break;
            case '-': cout << a - b << endl; break;
            case '*': cout << a * b << endl; break;
            case '/': cout << a / b << endl; break;
        }
    }

}
