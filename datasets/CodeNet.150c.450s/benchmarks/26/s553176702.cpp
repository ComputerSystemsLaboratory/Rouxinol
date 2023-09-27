#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    if (a < b) {
        cout << "a < b" << endl;
    } else if (a > b) {
        cout << "a > b" << endl;
    } else if (a == b) {
        cout << "a == b" << endl;
    }
    return 0;
}