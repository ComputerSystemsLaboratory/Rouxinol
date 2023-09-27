#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string str;
    while(cin>>str) {
        if(str=="-") return 0;
        int m,h;
        cin>>m;
        for(int i=0;i<m;i++) {
            cin>>h;
            string sub=str.substr(0,h);
            str+=sub;
            str.erase(0,h);
        }
        cout<<str<<endl;
    }
    return 0;
}