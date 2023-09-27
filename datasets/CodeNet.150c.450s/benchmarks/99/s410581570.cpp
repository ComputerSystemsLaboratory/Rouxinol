#include <iostream>
#include <string>
#include <cctype>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)

inline int unit(char c){
    return c == 'm'? 1000: c == 'c'? 100: c == 'x'? 10: 1;
}

int decode(string& s){
    int res = 0;
    char c = '1';
    rep(i, (int)s.size()){
        if(isdigit(s[i]))c = s[i];
        else res += (c - '0') * unit(s[i]), c = '1';
    }
    return res;
}

string encode(int n){
    string res = "", num = "mcxi";
    rep(i, 4){
        int c = n / unit(num[i]);
        if(c)res += (1 < c? to_string(c): "") + num[i];
        n %= unit(num[i]);
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string s, t;
        cin >> s >> t;
        cout << encode(decode(s) + decode(t)) << '\n';
    }
    return 0;
}