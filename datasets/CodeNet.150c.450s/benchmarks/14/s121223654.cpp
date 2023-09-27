#include <iostream>
#include <cmath>

using namespace std;

void nabeatsu(int n);

int main()
{
    int n;
    cin >> n;
    nabeatsu(n);
}

void nabeatsu(int n)
{
    for( int i = 1; i <= n ; ++i ){
        int x = i;

        if ( !(x % 3) ){
            cout << " " << i;
        }
        else
        {
            do{
                if ( x % 10 == 3 ){
                    cout << " " << i;
                    break;
                }
            } while( x /= 10 );
        }
    }

    cout << endl;
}