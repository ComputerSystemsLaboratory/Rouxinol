#include <iostream>
#include <string>
using namespace std;

int main () {
    string str, op, p, tmp;
    int q, n1, n2, size;

    cin >> str;
    cin >> q;

    for ( int i = 0; i < q; i++ ) {
        cin >> op >> n1 >> n2;
        if ( op == "print" ) {
            cout << str.substr( n1, n2 - n1 + 1 ) << endl;
        } else if ( op == "reverse" ) {
            tmp = str.substr( n1, n2 - n1 + 1 );
            // cout << "Debug : " << tmp << endl;
            size = tmp.size();
            for ( int j = 0; j < size; j++ ) {
                str[j + n1] = tmp[size - j - 1];
            }
        } else if ( op == "replace" ) {
            cin >> p;
            str = str.replace( n1, n2 - n1 + 1, p );
            // cout << "Debug : " << str << endl;
        }
    }
    return 0;
}