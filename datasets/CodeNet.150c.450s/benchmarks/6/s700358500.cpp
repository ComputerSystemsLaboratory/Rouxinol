#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((c - 1 < b) ? "No" : (b - 1 < a) ? "No" : "Yes") << endl;
    return 0;
}

