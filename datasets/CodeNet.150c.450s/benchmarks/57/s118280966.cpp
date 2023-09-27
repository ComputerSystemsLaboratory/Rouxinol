#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vnum1, vnum2;
    vector<char> vop;
    int num1, num2, i, N = 0;
    char op;

    cin >> num1 >> op >> num2;
    vnum1.push_back(num1);
    vop.push_back(op);
    vnum2.push_back(num2);
    while(vop[N] != '?') {
        cin >> num1 >> op >> num2;
        vnum1.push_back(num1);
        vop.push_back(op);
        vnum2.push_back(num2);
        ++N;
    }

    for(i=0; i<N; ++i) {
        switch(vop[i]) {
            case '+':
                cout << vnum1[i] + vnum2[i] << endl;
                break;
            case '-':
                cout << vnum1[i] - vnum2[i] << endl;
                break;
            case '*':
                cout << vnum1[i] * vnum2[i] << endl;
                break;
            case '/':
                cout << vnum1[i] / vnum2[i] << endl;
                break;
            default:
                break;
        }
    }

    return 0;
}