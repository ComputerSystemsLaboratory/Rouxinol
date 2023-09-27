#include <iostream>
using namespace std;

int main (int argc, char* argv[])
{
    int a, b;
    cin >> a >> b;

    if (a < -1000) return 0;
    if (1000 < b) return 0;

    if (a < b) cout << "a < b" << endl;
    else if (a > b) cout << "a > b" << endl;
    else cout << "a == b" << endl;

    return 0;
}