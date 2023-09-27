#include <iostream>
#include <cctype>
#include <string>
#include <string.h>
using namespace std;
int main(){
    string a,b = "";
    int l[26] = {};
    while(cin >> a){
        for(int i = 0; i < a.length(); i++){
            if(a[i] >= 'a' && a[i] <= 'z' ){
                l[a[i] - 'a'] += 1; 
            } else if(a[i] >= 'A' && a[i] <= 'Z' ) {
                l[a[i] - 'A'] += 1;
            }
        }
    }
    char k[26], sai = 'a';
    for(int i = 0; i < 26; i++){
        k[i] = sai;
        sai += 1;
    }
    for(int i = 0; i < 26; i++){
        cout << k[i] << " : " <<  l[i] << endl;
    }
    return 0;
}
