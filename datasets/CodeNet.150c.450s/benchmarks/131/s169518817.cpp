#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int strtoint(string s) {
    int n = 0;
    int digit = 1;
    for(int i=s.size()-1; i>=0; --i, digit*=10){
         n += digit * (s[i]-'0');
    }
    return n;
}
int main(void){
    int a, L;
    char s[10];
    int x, y;
    bool flag;
    vector<int> l;
    while(cin >> a >> L && (a || L)) {
        l.clear();
        l.push_back(a);
        flag = false;
        int i = 0;
        while(true) {
            for(int k=L-1; k>=0; --k) {
                s[k] = a%10 + '0';
                a /= 10;
            }
            s[L] = '\0';
            sort(s, s+L);
            x = strtoint(s);
            sort(s, s+L, greater<char>());
            y = strtoint(s);
            l.push_back(y-x);
            for(int j=0; j<i; ++j) {
                if(i > 0 && l[i] == l[j]) {
                    cout << j << " " << l[i] << " " << i-j << endl;
                    flag = true;
                }
            }
            if(flag) break;
            else {
                i++;
                a = y-x;
            }
        }
    }
}