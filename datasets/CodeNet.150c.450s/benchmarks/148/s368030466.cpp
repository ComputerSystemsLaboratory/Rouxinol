#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
    int n;
    cin >> n;
    string b[4]={"AC","WA","TLE","RE"};
    map<string,int> a;
    rep(i,n){
        string s;
        cin >> s;
        a[s]++;
    }
    rep(i,4) cout << b[i] <<" x " << a[b[i]] << endl; 
}
