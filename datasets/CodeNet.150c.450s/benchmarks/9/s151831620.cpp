#include <bits/stdc++.h>
using namespace std;

string str,f,b;
int N,koko,memo;

int main(){

    while(1){
        koko = 0;
        cin >> str;
        if(str == "-") break;
        cin >> N;
        for(int i = 0; i < N; ++i){
            cin >> memo;
            koko += memo;
        }
        koko = koko % str.length();

        f = str.substr(0,koko);
        b = str.substr(koko,str.length() - koko);
        cout << b << f << endl;
    }
    return 0;
}