#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    cin >> a;
    cout << a / 3600 << ":";
    a %= 3600;
    cout << a / 60 << ":";
    a %= 60;
    cout << a << endl;
    return 0;
}

