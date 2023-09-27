#include <iostream>
#include <sstream>
#include <string>

using namespace std;


int main() {
    int a, b;

    while(cin >> a) {
        cin >> b;
        stringstream ss;
        ss << (a + b);
        cout << ss.str().size() << endl;
    }
    return 0;
}