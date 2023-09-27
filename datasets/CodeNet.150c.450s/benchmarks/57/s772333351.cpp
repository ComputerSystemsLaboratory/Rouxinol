#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num1, num2;
    char symbol;
    while(symbol != '?'){
        cin >> num1 >> symbol >> num2;
        switch (symbol){
            case '+':
            cout << num1 + num2 << endl;
            break;
            case '-':
            cout << num1 - num2 << endl;
            break;
            case '*':
            cout << num1 * num2 << endl;
            break;
            case '/':
            cout << num1 / num2 << endl;
        }
    }
}