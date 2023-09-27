#include <iostream>
using namespace std;

int main() {
    int a, b;
    const char* opr;
    cin >> a >> b;
    opr = a > b ? ">" : a < b ? "<" : "==";
    cout << "a " << opr << " b" << endl;
}