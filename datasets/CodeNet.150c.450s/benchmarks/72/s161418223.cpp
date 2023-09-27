#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    char c[1200];
    cin.getline(c, sizeof(c));
    int i = 0;
    while(c[i] != '\0') {
        if (islower(c[i])) {
            cout << (char)toupper(c[i]);
        }else if (isupper(c[i])) {
            cout << (char)tolower(c[i]);
        }else {
            cout << (char)c[i];
        }
        i++;
    }
    cout << endl;
    return 0;
}