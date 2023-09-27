#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
using P = pair<int,int>;

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

// イテレータ要素のインデックス
distance(A.begin(), itr);
*/

int main()
{
    int n; cin >> n;
    map<ll, ll> m;
    ll sum = 0;
    rep(i,n){
        int ai; cin >> ai;
        sum += ai;
        ++m[ai];
    }

    int q; cin >> q;
    rep(_,q){
        ll b, c; cin >> b >> c;
        sum -= m[b]*b;
        sum += m[b]*c;
        cout << sum << endl;
        m[c] += m[b];
        m[b] = 0;
    }


    // cout << ++m[10000] << endl;
        
}