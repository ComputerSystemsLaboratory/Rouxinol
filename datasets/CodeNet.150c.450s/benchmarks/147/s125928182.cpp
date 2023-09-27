#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , a[10100] = {0} ;
    for(int i = 1 ; i <= 100 ; i++)
    {
         for(int j = 1 ; j <= 100 ; j++)
         {
              for(int k = 1 ; k <= 100 ; k++)
              {
                    int x = i*i + j*j + k*k + i*j + j*k + k*i ;
                    if(x > 10099)
                    {
                         continue ;
                    }
                    a[x]++ ;
              }
         }
    }
    cin >> n ;
    for(int i = 1 ; i <= n ; i++)
    {
         cout << a[i] << endl ;
    }
}
