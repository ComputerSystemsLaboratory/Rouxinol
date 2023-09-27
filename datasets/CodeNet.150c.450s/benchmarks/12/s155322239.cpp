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

int main()
{
    int N; cin >> N;
    ll A[N];
    rep(i, N){
        ll Ai; cin >> Ai;
        A[i] = Ai;
    }
    rep(i, N){
        printf("node %d: key = %ld, ", i+1, A[i]);
        if(i != 0) printf("parent key = %ld, ", A[(i-1)/2]);
        int l_ind, r_ind;
        l_ind = 2*i+1; r_ind = 2*(i+1);
        if(l_ind < N) printf("left key = %ld, ", A[l_ind]);
        if(r_ind < N) printf("right key = %ld, ", A[r_ind]);
        cout << endl;
    }
}
