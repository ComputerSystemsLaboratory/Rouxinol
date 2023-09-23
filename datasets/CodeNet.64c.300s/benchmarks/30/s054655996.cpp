#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int moneySet[] = { 500 , 100 , 50 , 10 , 5 , 1 } ;
    int money = 0 ;
    int Count = 0 ;
    while(1)
    {
        cin >> money ;
        if ( money == 0 ) break ;
        money = 1000 - money ;

        for (int i = 0 ; i < 6 ; i++ )
        {
            while( money >= moneySet[i] )
            {
                Count++ ;
                money -= moneySet[i] ;
            }
        }

        cout << Count << endl ;
        Count = 0 ;
    }

    return 0 ;
}