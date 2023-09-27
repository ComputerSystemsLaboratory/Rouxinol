#include<iostream>
using namespace std;

int main()
{
    int x,y;

    while( cin >> x >> y )
    {
        if( x == 0 && y == 0 )
            break;
        else
            if( x > y )
            {
                int tmp = x;
                x = y;
                y = tmp;
            }
        cout << x << " " << y << endl;
    }
    return 0;
}
