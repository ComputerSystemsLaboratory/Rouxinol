#include "bits/stdc++.h"
using namespace std;
int main(){
    string s,t;
    while(true){
        cin >> s;
        if(s=="-") break;
        int n = s.length();
        int m,i,h;
        cin >> m;
        for(i=0;i<m;i++){
            cin >> h;
            t = s.substr(0,h);
            s.erase(0,h);
            s += t;
        }
        cout << s << endl;
    }
    return 0;
}
