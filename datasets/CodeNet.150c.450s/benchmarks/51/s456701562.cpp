#include <iostream>

using namespace std;

int main()
{
    bool t[30] = {};
    for( int i=0; i<28; ++i ) {
        int s;
        cin >> s;
        t[s-1] = true;
    }
    for( int i=0; i<30; ++i )
        if ( !t[i] )
            cout << i+1 << endl;
}