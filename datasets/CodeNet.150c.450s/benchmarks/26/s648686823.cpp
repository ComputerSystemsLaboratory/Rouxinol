#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string op;
    if (a < b)
        op = "<";
    else if (a > b)
        op = ">";
    else
        op = "==";
    cout << "a " << op << " b" << endl;
    return 0;
}

