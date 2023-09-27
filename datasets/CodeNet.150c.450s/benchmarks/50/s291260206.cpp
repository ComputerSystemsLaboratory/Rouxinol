#include <iostream>

using namespace std;

int const cset[] = { 500, 100, 50, 10, 5, 1 };

int main()
{
    int m;
    while( cin >> m ) {
        if ( m == 0 )
            break;

        int r = 1000 - m;
        int sum = 0;
        for( auto const& c : cset ) {
            for(;;) {
                if ( r - c >= 0 ) {
                    ++sum;
                    r -= c;
                } else {
                    break;
                }
            }
        }
        cout << sum << endl;
    }
}