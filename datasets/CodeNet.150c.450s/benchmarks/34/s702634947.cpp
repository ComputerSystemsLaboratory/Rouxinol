#include<iostream>
using namespace std;

typedef unsigned long long int li;

void sort( int *a )
{
    for( int i = 0; i < 2; i++ )
        for( int j = 0; j < 3; j++ )
            if( a[i] > a[j] )
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

li factorial( int a )
{
    if( a <= 1 )
        return 1;
    return a * factorial( a - 1 );
}

int main()
{
    int n, m[3];
    
    while( cin >> n )
    {
        if( n == 0 )
            break;

        li sum = 0;
        int a = n / 3, b = n / 2, c = n;

        for( int i = 0; i <= a; i++ )
            for( int j = 0; j <= b; j++ )
                for( int k = 0; k <= c; k++ )
                    if( 3 * i + 2 * j + k == n )
                    {
                        m[0] = i;
                        m[1] = j;
                        m[2] = k;
                        sort(m);
                        li r = 1;
                        for( int p = 0; p < i + j + k - m[2]; p++ )
                            r *= i + j + k - p;
                        sum += r / ( factorial(m[0]) * factorial(m[1]) );
                    }
                        
    
        //cout << sum << endl;

        if( sum % 10 == 0 )
            sum /= 10;
        else
            sum = sum / 10 + 1;
        
        if( sum % 365 == 0 )
            sum /= 365;
        else
            sum = sum / 365 + 1;

        cout << sum << endl;
    }
    return 0;
}
