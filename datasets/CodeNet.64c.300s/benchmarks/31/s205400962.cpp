#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int student[28] = {0} ;
    int Count = 0 ;
    for ( int i = 0 ; i < 28 ; i++ )
    {
        cin >> student[i] ;
    }
    sort( student,student+28 ) ;
    for( int i = 0 ; i < 28 ; i++ )
    {
        if ( student[i] == (student[i-1] + 2) )
        {
            cout << student[i] - 1 << endl ;
            Count++ ;
        }
    }
    switch ( Count )
    {
        case 0:
        {
            cout << 29 << endl ;
        }
        case 1:
        {
            cout << 30 << endl ;
        }
    }
    return 0 ;
}