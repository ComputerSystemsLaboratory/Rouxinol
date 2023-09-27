#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s = (a < b) ? "a < b" :
               (a > b) ? "a > b" :
                         "a == b";
    cout << s << endl;
    return 0;
}