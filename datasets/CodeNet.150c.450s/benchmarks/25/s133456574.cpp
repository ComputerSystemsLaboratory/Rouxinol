#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    string str;
    int ans[100] = {0};
    while(getline(cin, str)){
        rep(i,str.size()){
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 32;
            if(str[i] >= 'a' && str[i] <= 'z'){
                ans[str[i] - 'a']++;
            }
        }
    }
    rep(i,26){
        printf("%c : %d\n", 'a' + i, ans[i]);
    }
}