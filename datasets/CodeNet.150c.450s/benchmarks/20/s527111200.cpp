#include <iostream>

using namespace std;

int main() {
    int S;
    cin >> S;
    int s = S % 60;
    S /= 60;
    int m = S % 60;
    S /= 60;
    int h = S;
    cout << h << ':' << m << ':' << s << endl;
}
