#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool yes_or_no = true;
    if (a >= b || a >= c || b >= c) yes_or_no = false;
    if (yes_or_no) cout << "Yes";
    else cout << "No";
    cout << endl;

    return 0;
}