#include <iostream>

using namespace std;

int main()
{
    int a, b;

    do {
         cin >> a >> b;
    } while ((a < -1000 || a > 1000) || (b < -1000 || b > 1000));

    if (a > b) {
        cout << "a > b" << endl;
    } else if (a < b) {
        cout << "a < b" << endl;
    } else if (a == b) {
        cout << "a == b" << endl;
    }

    return (0);
}