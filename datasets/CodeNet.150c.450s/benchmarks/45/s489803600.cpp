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

const ll M = 1000000007;

ll power(int m, int n){
    ll res = 1;
    if(n > 0){
        res = power(m, n/2);
        if(n % 2 == 0) res = (res * res) % M;
        else res = (((res*res)%M) * m) % M;
    }
    return res;
}

int main()
{
    int m, n; cin >> m >> n;
    cout << power(m, n) << endl;
}
