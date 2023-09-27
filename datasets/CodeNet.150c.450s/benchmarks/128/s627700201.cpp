#include <bits/stdc++.h>
using namespace std;

int main () {
    int i;
    string str;
    cin >> str;
    for(i = 0; i < str.size(); ++i){
        cout << str.at(str.size() - i - 1);
    }
    cout << endl;
}


