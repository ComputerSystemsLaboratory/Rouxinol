#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int c[1005][1005];

int lcs( string X, string Y){

    int m, n, i, j;

    m = X.size();
    n = Y.size();

    X = ' ' + X;
    Y = ' ' + Y;

    int Lmax = 0;

    for( i = 1; i <= m ; i++){

        c[i][0] = 0;

    }

    for( i = 1; i <= n ; i++ ){

        c[0][i] = 0;

    }

    for( i = 1; i <= m; i++ ){

        for( j = 1; j <= n ; j++ ){

            if( X[i] == Y[j] ){

                c[i][j] = c[i-1][j-1] + 1;

            } else if( c[i-1][j] >= c[i][j-1] ){

                c[i][j] = c[i-1][j];

            } else {

                c[i][j] = c[i][j-1];

            }

            Lmax = max( Lmax, c[i][j] );

        }

    }

    return Lmax;

}

int main(){

    int n;
    string X, Y;

    cin >> n;

    for( int i = 0 ; i < n ; i++ ){

        cin >> X >> Y;

        cout << lcs( X, Y) << endl;

    }

    return 0;

}
