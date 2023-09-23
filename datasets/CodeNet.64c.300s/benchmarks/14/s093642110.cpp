#include <iostream>
using namespace std;

void IF()
{
    int a, b;
    cin >> a >> b;

    if(a<b)
        cout << "a < b" << endl;
    if(a==b)
        cout << "a == b" << endl;
    if(a>b)
        cout << "a > b" << endl;
}

int main()
{
    IF();
}
