#include<iostream>
using namespace std;

int main()
{
    int n, m;
    char c[200], a, b, p;

    while( cin >> n )
    {
        if( n == 0 )
            break;    
        for( int i = 0; i < 200; i++ )
            c[i] = '.';
        for( int i = 0; i < n; i++ )
        {
            cin >> a >> b;
            c[a] = b;
        }

        cin >> m;

        for( int i = 0; i < m; i++ )
        {
            cin >> p;
            if( c[p] == '.' )
                cout << p;
            else
                cout << c[p];
        }
        cout << endl;
    }   
    return 0;
}
