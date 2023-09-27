#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main( void )
{
    string s;
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        set <string> V;
        cin >> s;
        int l = s.size();
        for ( int i = 1; i < l; i++ ) {
            string left = s.substr( 0, i );
            string right = s.substr( i );
            string left_r = left, right_r = right;
            reverse( left_r.begin(), left_r.end() );
            reverse( right_r.begin(), right_r.end() );
            V.insert( left + right );
            V.insert( right + left );
            V.insert( left + right_r );
            V.insert( right_r + left );
            V.insert( left_r + right );
            V.insert( right + left_r );
            V.insert( left_r + right_r );
            V.insert( right_r + left_r );
        }
        cout << V.size() << endl;
    }
    return 0;
}