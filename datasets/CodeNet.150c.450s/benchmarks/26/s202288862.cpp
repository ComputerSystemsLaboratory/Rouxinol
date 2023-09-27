#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int a, b;
    
    while (cin >> a >> b) {
        if (a > b) {
            cout << "a > b" << endl;
        } else if (a < b) {
            cout << "a < b" << endl;
        } else {
            cout << "a == b" << endl;
        }
    }
}

