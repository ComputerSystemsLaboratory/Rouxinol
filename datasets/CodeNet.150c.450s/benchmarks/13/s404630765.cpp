#include "bits/stdc++.h"
using namespace std;
int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    
    string str1, str2;
    cin >> str1 >> str2;
    
    int len1 = str1.length();
    int len2 = str2.length();
    
    for(int i = 0; i < len1 ; i ++){
        bool nomatch = false;
        for(int j = 0; j < len2; j ++){
            int k = i + j;
            k %= len1;
            if(j < len2 && str1[k] != str2[j]){
                nomatch = true;
            }
        }
        if(nomatch == false){
            cout << "Yes" <<endl;
            return 0;
        }
    }
    
    cout << "No" <<endl;
    
    
    
    
    
    return 0;
}