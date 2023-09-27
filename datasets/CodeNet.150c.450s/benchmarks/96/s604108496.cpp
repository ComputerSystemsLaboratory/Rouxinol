#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int n;

char InputEnter(int num, int no) {
    char res;
    if(num == 1) {
        no %= 5;
        if(no == 0) res = '.';
        else if(no == 1) res = ',';
        else if(no == 2) res = '!';
        else if(no == 3) res ='?';
        else res = ' ';
    }else if(num == 2) {
        no %= 3;
        if(no == 0) res = 'a';
        else if(no == 1) res = 'b';
        else res = 'c';
    }else if(num == 3) {
        no %= 3;
        if(no == 0) res = 'd';
        else if(no == 1) res = 'e';
        else res = 'f';
    }else if(num == 4) {
        no %= 3;
        if(no == 0) res = 'g';
        else if(no == 1) res = 'h';
        else res = 'i';
    }else if(num == 5) {
        no %= 3;
        if(no == 0) res = 'j';
        else if(no == 1) res = 'k';
        else res = 'l';
    }else if(num == 6) {
        no %= 3;
        if(no == 0) res = 'm';
        else if(no == 1) res = 'n';
        else res = 'o';
    }else if(num == 7) {
        no %= 4;
        if(no == 0) res = 'p';
        else if(no == 1) res = 'q';
        else if(no == 2) res = 'r';
        else res = 's';
    }else if(num == 8) {
        no %= 3;
        if(no == 0) res = 't';
        else if(no == 1) res = 'u';
        else res = 'v';
    }else if(num == 9) {
        no %= 4;
        if(no == 0) res = 'w';
        else if(no == 1) res = 'x';
        else if(no == 2) res = 'y';
        else res = 'z';
    }
    return res;
}

int main() {
    cin >> n;
    while(n--) {
        string s; cin >> s;
        int slen = s.length();
        vector<char> ans;
        int cc = 0;
        int cno = 0;
        for(int i = 0; i < slen; ++i) {
            int ch = s[i] - '0';
            if(ch == 0) {
                if(cc == 0) continue;
                ans.emplace_back(InputEnter(cno, cc-1));
                cc = 0;
            }else {
                cno = ch;
                cc++;
            }
        }
        for(int i = 0; i < (int)ans.size(); ++i) {
            cout << ans[i];
        }
        cout << endl;
    }
}
