#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    string o;
    if (a == b) o = "a == b";
    else if (a < b) o = "a < b";
    else o = "a > b";
    cout << o << endl;
    return 0;
}