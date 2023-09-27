#include <iostream>
using namespace std;

int main()
{
    int x;
    while(1)
    {
        cin >> x;
        if(0 <= x || x <= 100)
        {
            break;
        }
    }

    cout << x * x * x << endl;

    return 0;
}