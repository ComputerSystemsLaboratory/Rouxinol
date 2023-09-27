#include <iostream>
using namespace std;
   
int main() {
    int a, b;
    cin >> a >> b;
    string moji = a == b ? "==" : (a > b ? ">" : "<");
    cout << "a" << " " << moji << " " << "b" << endl;
}