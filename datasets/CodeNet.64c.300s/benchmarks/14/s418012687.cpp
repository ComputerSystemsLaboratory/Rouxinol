#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    if (a < b) {
        cout << "a < b\n";
    } else if (a > b) {
        cout << "a > b\n";
    } else {
        cout << "a == b\n";
    }
    return 0;
}