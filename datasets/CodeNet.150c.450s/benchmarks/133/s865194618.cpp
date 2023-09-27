#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int D;
    cin >> D;   // D = 365
    ll c[26];
    for(int i=0;i<26;i++)
        cin >> c[i];
    ll s[D][26];
    for(int i=0;i<D;i++){
        for(int j=0;j<26;j++){
            cin >> s[i][j];
        }
    }

    int t[D];
    for(int i=0;i<D;i++)
        cin >> t[i];

    int last[26] = {};
    
    // D日分
    ll v = 0;
    for(int i=1;i<=D;i++){
        // 満足度の増加分
        v += s[i-1][t[i-1]-1];
        last[t[i-1]-1] = i;
        // 満足度の低下分（コンテスト26種分）
        for(int j=0;j<26;j++)
            v -= c[j]*(i - last[j]);
        // i日目終了時点での満足度
        cout << v << endl;
    }

}