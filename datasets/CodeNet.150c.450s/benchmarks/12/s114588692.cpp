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
    int H; cin >> H;
    vector<int> A(H);
    rep(i,H) cin >> A[i];
    rep(i,H){
        printf("node %d: key = %d, ", i+1, A[i]);
        if(i != 0) printf("parent key = %d, ", A[(i-1)/2]);
        if(i*2+1 <= H-1) printf("left key = %d, ", A[i*2+1]);
        if(i*2+2 <= H-1) printf("right key = %d, ", A[i*2+2]);
        cout << endl;
    }
}
