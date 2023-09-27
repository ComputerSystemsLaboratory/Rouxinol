#include<iostream>
#include<string>
using namespace std;

int calc( int* a, string s )
{
    int sum = 0;
    for( int i = 0; i < s.size(); i++ )
        {
            if( 'a' < s[i] && s[i] < 'z' )
                sum += a[s[i]];
            else
            {
                sum += ( s[i] - '0' ) * a[s[i+1]];
                i++;
            }
        }
    return sum;
}

int main()
{
    int n, a[100];
    string s1, s2;
    char b[4];

    a['m'] = 1000;
    a['c'] = 100;
    a['x'] = 10;
    a['i'] = 1;

    b[0] = 'm';
    b[1] = 'c';
    b[2] = 'x';
    b[3] = 'i';

    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        cin >> s1 >> s2;

        int res = calc( a, s1 ) + calc( a, s2 );

        int d = 1000, j = 0;
        while( res != 0 )
        {
            if( res / d == 0 );
            else if( res / d == 1 )
            {
                cout << b[j];
                res -= ( res / d ) * d;
            }
            else
            {
                cout << res / d << b[j];
                res -= ( res / d ) * d;
            }
            d /= 10;
            j++;
        }
        cout << endl;
    }
    return 0;
}

