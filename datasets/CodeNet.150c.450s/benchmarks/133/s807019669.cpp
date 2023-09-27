#include<bits/stdc++.h>
using namespace std;

long d;
long c[26];
long s[365][26];
long t[365];
long last[27];

long calcMinus(int day);

int main(){
    cin >> d;
    for(int i=0;i<26;i++)cin >> c[i];
    for(int i=0;i<d;i++){
        for(int j=0;j<26;j++){
            cin >> s[i][j];
        }
    }
    long t[d];
    for(int i=0;i<d;i++)cin >> t[i];
    
    for(int i=1;i<=26;i++)last[i] = -1;

    long ans = 0;

    for(int i=0;i<d;i++){
        last[t[i]] = i;
        ans += s[i][t[i]-1];
        ans += calcMinus(i);
        cout << ans << endl;

    }
}


long calcMinus(int day){

    long ans = 0;
    for(int i=0;i<26;i++){
        ans -= c[i] * (day - last[i+1]);
    }

    return ans;
}