#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() 
{
    int a, b, c;

    while (cin >> a >> b >> c) {
        if (a < b && b < c) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

