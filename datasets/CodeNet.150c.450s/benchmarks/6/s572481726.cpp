#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void) {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if (a < b && b < c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }   
    return 0;
}