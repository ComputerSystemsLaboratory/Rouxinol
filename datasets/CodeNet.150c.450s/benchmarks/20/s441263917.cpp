#include <iostream>
using namespace std;

int main() {
    int ss, h, m, s;
    cin >> ss;
    s = ss % 60;
    m = ss / 60;
    h = m /60;
    m = m % 60;
    cout << h << ':' << m << ':' << s << endl;
}