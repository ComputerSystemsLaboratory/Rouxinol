#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, int> m;

    int n, l = 0;
    while( cin >> n ) {
        ++m[n];
        l = max( l, m[n] );
    }

    for( auto&& p : m ){
        if ( p.second == l )
            cout << p.first << endl;
    }
}