#include <iostream>
#include <vector>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

string x[] = {
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

int n;
string s;

void solve(int i){
    if(!s[i]){
        return;
    }
    if(s[i] == '0'){
        solve(i + 1);
        return;
    }
    int t = s[i++];
    int c = 0;
    while(s[i] == t){
        ++i;
        ++c;
    }
    int p = t - '1';
    cout << x[p][c % x[p].size()];
    solve(i + 1);
}

int main(){
    cin >> n;
    rep(i, n){
        cin >> s;
        solve(0);
        cout << endl;
    }
    return 0;
}
