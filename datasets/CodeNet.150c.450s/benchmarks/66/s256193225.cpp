#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    set<string> ids;
    bool is_closed = true;

    int n;
    cin >> n;

    for( int i=0; i<n; ++i ) {
        string s;
        cin >> s;

        ids.insert( s );
    }

    int m;
    cin >> m;

    for( int i=0; i<m; ++i ) {
        string s;
        cin >> s;

        if ( ids.find( s ) != ids.end() ) {
            cout << ( is_closed ? "Opened" : "Closed" ) << " by " << s << endl;
            is_closed = !is_closed;
        } else {
            cout << "Unknown " << s << endl;
        }
    }
}