#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int>  stk;
    int         car;
    while (cin >> car) {
        if (car) {
            stk.push(car);
        } 
        else {
            cout << stk.top() << endl;
            stk.pop();
        }
    }
}