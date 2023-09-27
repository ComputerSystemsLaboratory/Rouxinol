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

const int INF = 1000100100;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    vector<int> l(n);
    rep(i,n) l[i] = INF;   

    int length = 1;
    l[0] = a[0];
    for(int i=1; i<n; i++){
        if(a[i] > l[length-1]){
            length++;
            l[length-1] = a[i];
        }else{
            *lower_bound(l.begin(), l.end(), a[i]) = a[i];
        }
    }

    cout << length << endl;
}
