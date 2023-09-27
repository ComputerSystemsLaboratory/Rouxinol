#include<iostream>
using namespace std;

int main()
{
    int n, min, max, a[200];

    while( cin >> n >> min >> max )
    {
        if( n + min + max == 0 )
            break;

        for( int i = 0; i < n; i++ )
            cin >> a[i];

        int max_distance = 0, j = 0;
        for( int i = min; i <= max; i++ )
            if( a[i-1] - a[i] >= max_distance )
            {
                max_distance = a[i-1] - a[i];
                j = i;
            }

        cout << j << endl;
    }
    return 0;
}
