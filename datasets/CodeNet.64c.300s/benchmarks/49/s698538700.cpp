#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b) {
        int sum = a + b;
        int digit = 1;
        while (sum /= 10, sum != 0) ++digit;
        cout << digit << endl;
    }
    return 0;
}