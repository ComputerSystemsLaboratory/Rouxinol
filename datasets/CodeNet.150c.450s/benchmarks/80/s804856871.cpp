#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int score[2] = {0} ;
    int cmp = 0 ;

    for (int i = 0 ; i < 2 ; i++ )
    {
        for ( int j = 0 ; j < 4 ; j++ )
        {
            cin >> cmp ;
            score[i] += cmp ;
        }
    }

    if ( score[0] >= score[1] )
    {
        cout << score[0] << endl ;
    } else cout << score[1] << endl ;

    return 0 ;
}