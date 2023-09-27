#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

/* 大文字を小文字に変換 */
char tolower(char c) {return (c + 0x20);}
/* 小文字を大文字に変換 */
char toupr(char c) {return (c - 0x20);}

// if('A'<=s[i] && s[i]<='Z') s[i] += 'a'-'A';

/*
string s = "abcdefg"
s.substr(4) "efg"
s.substr(0,3) "abc"
s.substr(2,4) "cdef"
*/

const int INFTY = pow(10, 8);

int main()
{
    int n; cin >> n;
    int p[n+1];
    int m[n+1][n+1];
    rep(i,n){
        m[i][i] = 0;
        int p1, p2; cin >> p1 >> p2;
        p[i] = p1;
        if(i == n-1){
            m[i+1][i+1] = 0;
            p[i+1] = p2;
        }
    }

    for(int l=2; l<=n; l++){
        for(int i=1; i<=n-l+1; i++){
            int j = i+l-1;
            m[i][j] = INFTY;
            for(int k=i; k<j; k++){
                m[i][j] = min(m[i][j], m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
            }
        }
    }
    cout << m[1][n] << endl;
}
