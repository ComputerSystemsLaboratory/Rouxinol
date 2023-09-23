#include <iostream>
using namespace std;

const char *sign(int a, int b)
{
    if (a > b)
        return ">";
    else if (a < b)
        return "<";
    else
        return "==";
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << "a " << sign(a, b) << " b" << endl;

    return 0;
}