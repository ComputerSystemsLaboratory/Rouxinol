#include <iostream>
#include <cstring>
using namespace std;

#define MAX 1000000
bool isPrime[MAX+1];

int main( void )
{
    int a, d, n;
    memset( isPrime, false, sizeof( isPrime ) );

    isPrime[2] = true;
    for ( int i = 3; i <= MAX; i += 2 ) isPrime[i] = true;
    for ( int i = 3; i <= MAX; i += 2 )
    {
        if ( isPrime[i] == false ) continue;
        for ( int j = i + i; j <= MAX; j += i ) isPrime[j] = false;
    }

    while ( cin >> a >> d >> n && a && d && n )
    {
        int answer  = -1;
        int count   = 0;
        int term    = a;
        while ( count < n )
        {
            if ( isPrime[term] )
            {
                answer = term;
                count ++;
            }
            term += d;
        }

        cout << answer << endl;
    }

    return 0;
}