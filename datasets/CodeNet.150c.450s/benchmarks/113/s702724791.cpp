#include<iostream>
using namespace std;

int main()
{
    int x;
    int i = 1;

    while( cin >> x )
    {
        if( x != 0 )
        {
            cout << "Case " << i << ": " << x << endl;
            i++;
        }
        else
            break;
    }
    return 0;
}
