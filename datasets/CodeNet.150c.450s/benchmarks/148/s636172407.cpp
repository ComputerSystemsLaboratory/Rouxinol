#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
    int  n;
    cin >> n;
    map<string,int> cnt;
    rep(i, n){
        string s;
        cin >> s;
        cnt[s]++;
    }  
    for(string s : {"AC", "WA", "TLE", "RE"}){
        cout << s << " x " << cnt[s] << endl;
    }
    return 0;
}