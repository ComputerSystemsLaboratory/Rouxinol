#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
    int n;
    cin >> n;
    int a[4]={};
    rep(i,n){
        string s;
        cin >> s;
        if(s[0]=='A') a[0]++;
        if(s[0]=='W') a[1]++;
        if(s[0]=='T') a[2]++;
        if(s[0]=='R') a[3]++;
    }
    cout << "AC x " << a[0] << endl;
    cout << "WA x " << a[1] << endl;
    cout << "TLE x " << a[2] << endl;
    cout << "RE x " << a[3] << endl;
}