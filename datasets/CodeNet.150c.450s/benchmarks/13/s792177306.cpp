#include "bits/stdc++.h"
using namespace std;
int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    
    string str1, str2;
    cin >> str1 >> str2;
    
    str1 += str1;
    for(int i = 0; i < str1.length()/2;i++){
        if(str1.substr(i,str2.length()) == str2){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}