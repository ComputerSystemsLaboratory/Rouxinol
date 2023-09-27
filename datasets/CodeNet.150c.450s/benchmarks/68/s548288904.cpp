#include<iostream>
using namespace std;

void bubbleSort( int* a, int n )
{
    for( int i = 0; i < n; i++ )
        for( int j = n - 1; j >= i + 1; j-- )
        {
            if( a[j] < a[j-1] )
            {
                int t = a[j];
                a[j] = a[j-1];
                a[j-1] = t;
            }
        }
}

int main()
{
    int n, a[1000];

    while( cin >> n )
    {
        if( !n )
            break;

        for( int i = 0; i < n; i++ )
            cin >> a[i];

        bubbleSort( a, n );

        int min = 1000000000;
        for( int i = 0; i < n - 1; i++ )
            if( a[i+1] - a[i] < min )
                min = a[i+1] - a[i];

        cout << min << endl;
    }
    return 0;
}
