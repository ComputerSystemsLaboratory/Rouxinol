#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    while( cin >> n ) {
        if ( n == 0 )
            break;

        map<char, char> pt;
        for( int i=0; i<n; ++i ) {
            string f, t;
            cin >> f >> t;
            pt[f[0]] = t[0];
        }

        int m;
        cin >> m;
        for( int i=0; i<m; ++i ) {
            char c;
            cin >> c;
            auto const it = pt.find( c );
            cout << ( ( it != pt.end() ) ? it->second : c );
        }
        cout << endl;
    }
}