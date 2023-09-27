#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    string str;
    while(cin >> str, str[0] != '0'){
        int sum = 0;
        rep(i,str.size()){
            sum += str[i] - '0';
        }
        cout << sum << endl;
    }
}