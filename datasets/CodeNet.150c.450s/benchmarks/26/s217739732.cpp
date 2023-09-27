#include <iostream>
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    auto s = "a == b";
    if (a > b) {
        s = "a > b";
    } else if (a < b) {
        s = "a < b";
    }
    cout << s << endl;
    return 0;
}