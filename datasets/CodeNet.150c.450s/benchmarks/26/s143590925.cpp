#include <iostream>
using namespace std;

int main(void)
{
    int l, r;

    cin >> l >> r;
    if (l == r)
        cout << "a == b" << endl;
    else if (l > r)
        cout << "a > b" << endl;
    else
        cout << "a < b" << endl;
    return 0;
}