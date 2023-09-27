#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
    string str;
    getline(cin, str);
    REP(i, str.size()){
        if (islower(str[i])) cout << (char)toupper(str[i]);
        else if (isupper(str[i])) cout << (char)tolower(str[i]);
        else cout << (char)str[i];}
    cout << endl;
}