#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    string str;
    while(getline(cin, str)){
        rep(i,str.size()){
            if(str[i] >= 'a' && str[i] <= 'z') printf("%c", str[i] - 32);
            else if(str[i] >= 'A' && str[i] <= 'Z') printf("%c", str[i] + 32);
            else cout << str[i];
        }
    }
    cout << endl;
}