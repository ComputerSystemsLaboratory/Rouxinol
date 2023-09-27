#include <iostream>
using namespace std;

int main() {
    int S;
    int h, m, s;
    cin >> S;
    s = S % 60;
    m = ((S - s) % 3600) / 60;
    h = (S - m - s) / 3600;
    cout << h << ':' << m << ':' << s << endl;
    return 0;
}

