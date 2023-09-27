#include <iostream>

using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    string equality = (a > b) ? ">" : (a < b) ? "<" : "==";
    cout << "a " << equality << " b" << endl;
    return 0;
}