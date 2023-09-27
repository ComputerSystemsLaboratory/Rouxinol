#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main()
{


    int a,b;
    string op;

    while(1){
        cin >> a >> op >> b;
        if(op == "?"){
            break;
        }
        else if(op == "+"){
            cout << (a+b) << endl;
        }
        else if(op == "-"){
            cout << (a-b) << endl;
        }
        else if(op == "*"){
            cout << (a*b) << endl;
        }
        else if(op == "/"){
            cout << (a/b) << endl;
        }
        else{
        }
    }
    return 0;
}
