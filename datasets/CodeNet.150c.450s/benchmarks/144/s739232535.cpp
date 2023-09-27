#include <bits/stdc++.h>
using namespace std ;

//variable
int n = 0 ;
int m = 0 ;
int l = 0 ;
long long int A[101][101] = {0} ;
long long int B[101][101] = {0} ;
long long int C[101][101] = {0} ;

int main()
{
    cin >> n >> m >> l ;

    for (int i = 0 ;i < n ;i++ )
    {
        for (int j = 0 ;j < m ;j++ )
        {
            cin >> A[i][j] ;
        }
    }

    for (int i = 0 ;i < m ;i++ )
    {
        for (int j = 0 ;j < l ;j++ )
        {
            cin >> B[i][j] ;
        }
    }

    for (int j = 0 ;j < l ;j++ )
    {
        for (int i = 0 ;i < n ;i++ )
        {
            for (int k = 0 ;k < m ;k++ )
            {
                C[i][j] += A[i][k] * B[k][j] ;
            }
        }
    }

    for (int i = 0 ;i < n ;i++ )
    {
        for (int j = 0 ;j < l ;j++ )
        {
            if ( j != l - 1 )
            {
                cout << C[i][j] << " " ;
            }
            else cout << C[i][j] << endl ;
        }
    }

    return 0 ;
}