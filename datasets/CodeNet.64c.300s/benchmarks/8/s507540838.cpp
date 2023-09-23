#include<iostream>
using namespace std;

int main() 
{
    int n;

    cin >> n;

    for( int i = 1; i <= n; i++ )
    {
        int x = i;

        if( i % 3 == 0 || i % 10 == 3 )
            cout << " " << i;
        else
            while( x != 0)
            {
                x /= 10;
                if( x % 10 == 3 )
                {
                    cout << " " << i;
                    break;
                }
                    
            }
    }

    cout << endl;

    return 0;
}
