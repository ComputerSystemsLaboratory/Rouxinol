#include <iostream>
#include <string>
#include <map>
#include <cstdio>
using namespace std;

int main() {
    char com[10], str[13];
    map<string, bool> T;
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        scanf("%s%s", com, str);
        if ( 'i' == com[0] ) {
            T[string(str)] = true;
        } else {
            if ( T[string(str)] ) {
                cout << "yes\n";
            } else {
                cout << "no\n";
            }
        }
    }
    
    return 0;
}