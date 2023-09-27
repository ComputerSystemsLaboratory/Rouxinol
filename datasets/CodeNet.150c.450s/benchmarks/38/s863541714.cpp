#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n , a , b , c ;
    cin >> n ;
    for( int i=0 ; i<n ; i++ ){
        cin >> a >> b >> c;
        a = a*a;
        b = b*b;
        c = c*c;
        int ab=a+b;
        int ac=a+c;
        int bc=b+c;
        if( ab == c ){
            cout << "YES" << endl;
        }
        else if( ac == b ){
            cout << "YES" << endl;
        }
        else if( bc == a ){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}