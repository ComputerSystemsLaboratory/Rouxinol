# include<bits/stdc++.h>
#define ll long long
using namespace std ;

int main( ){

    int n ;

    cin >> n ;

    int ac = 0, wa = 0 , tle = 0 , re = 0 ;

    for( int i = 0 ; i < n ; i ++ ){

        string s ;

        cin >> s ;

        if( s == "AC"){

            ac ++ ;

        }

        if( s == "TLE" ){

            tle ++ ;

        }

        if( s == "RE"){

            re ++ ;

        }

        if( s == "WA" ){

            wa ++ ;

        }

    }

    cout << "AC " << "x " << ac << endl ;

    cout << "WA "<<"x "<< wa << endl ;

    cout << "TLE "<<"x "<<tle<< endl ;

    cout <<"RE "<<"x "<< re << endl ;

}
