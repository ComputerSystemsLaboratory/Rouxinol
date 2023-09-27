#include <bits/stdc++.h>
#define rep(i, n) rep2(i, 0, n)
#define rep2(i, m, n) for (int i = m; i < (n); i++)
typedef long long ll;
using namespace std;

int main(){
    int n;
    cin >> n;
    int ac=0, wa=0, tle=0, re=0;
    
    rep(i, n){
        string s;
        cin >> s;
        switch(s[0]){
            case 'A':
            ac++;
            break;
            case 'W':
            wa++;
            break;
            case 'T':
            tle++;
            break;
            case 'R':
            re++;
            break;
        }
    }
    
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
}