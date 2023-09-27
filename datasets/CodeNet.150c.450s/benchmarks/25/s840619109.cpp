#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
    string s = "abcdefghijklmnopqrstuvwxyz";
    string d;
    int k[26] = {};
    while(getline(cin, d)) {
        
        for(int i=0;i<d.size();i++) {
            d[i] = tolower(d[i]);
        }
        for(int i=0;i<s.size();i++) {
            for(int j=0;j<d.size();j++) {
                if(s[i] == d[j]) {
                    k[i]++;
                }
            }
        }
    }
    for(int i=0;i<s.size();i++) {
        cout << s[i] << " : " << k[i] << endl;
    }
    return 0;
}