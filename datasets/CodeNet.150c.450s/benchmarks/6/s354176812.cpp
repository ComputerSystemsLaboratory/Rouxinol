#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if(b >= c || a >= b)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes"<< endl;
    }

    return 0;
}