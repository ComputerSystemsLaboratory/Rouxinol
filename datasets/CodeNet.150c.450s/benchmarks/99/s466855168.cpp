#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

bool isNum(const char s) {
    return s >= '0' && s <= '9';
}
int convert(const string &s) {
    int i = 0;
    int ret = 0;
    while(i < s.size()) {
        if(isNum(s[i])) {
            int n = s[i]-'0';
            if(s[i+1] == 'm') ret += n*1000; 
            if(s[i+1] == 'c') ret += n*100; 
            if(s[i+1] == 'x') ret += n*10; 
            if(s[i+1] == 'i') ret += n; 
            i += 2;
        } 
        else if(s[i] == 'm') i++, ret += 1000;
        else if(s[i] == 'c') i++, ret += 100;
        else if(s[i] == 'x') i++, ret += 10;
        else if(s[i] == 'i') i++, ret += 1;
        else i++;
    }
    return ret;
}

string reverse(int n) {
    string s;
    if(n/1000 > 0) {
        if(n/1000 > 1) {
            char c = n/1000 + '0';
            s += c;
        }
        s += 'm';
        n %= 1000;
    }
    if(n/100 > 0) {
        if(n/100 > 1) {
            char c = n/100 + '0';
            s += c;
        }
        s += 'c';
        n %= 100;
    }
    if(n/10 > 0) {
        if(n/10 > 1) {
            char c = n/10 + '0';
            s += c;
        }
        s += 'x';
        n %= 10;
    }
    if(n > 0) {
        if(n > 1) {
            char c = n + '0';
            s += c;
        }
        s += 'i';
        n %= 1000;
    }
    return s;
}

int main(void){
    int n;
    string a, b;
    int x, y;
    cin >> n;
    rep(loop, n) {
        cin >> a >> b;
        cout << reverse(convert(a) + convert(b)) << endl;
    }
}