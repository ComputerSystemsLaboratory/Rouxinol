#include "bits/stdc++.h"
using namespace std;
int main(){
    string s;
    int i,sum;
    while(true){
        cin >> s;
        if(s == "0") break;
        sum = 0;
        for(i=0;i<s.length();i++){
            sum += s.at(i)-'0';
        }
        cout << sum << endl;
    }
    return 0;   
}
