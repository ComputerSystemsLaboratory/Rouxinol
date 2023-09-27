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

// イテレータ要素のインデックス
distance(A.begin(), itr);
*/

int n;

void countingSort(vector<int> &A, vector<int> &B, int k){
    vector<int> C(k+1);
    rep(i,k+1) C[i] = 0;
    // Aの要素に出現する数値の回数をそれぞれカウントする
    rep(i,n) C[A[i]]++;
    // Cの累積和を計算する
    rep(i,k+1){
        if(i == 0) continue;
        C[i] += C[i-1];
    }
    for(int i=n-1; i>=0; i--){
        B[C[A[i]]-1] = A[i];
        C[A[i]]--;
    }
}

int main()
{
    cin >> n;
    vector<int> A(n), B(n);
    int k = 0;
    rep(i,n){
        scanf("%d", &A[i]);
        if(k < A[i]) k = A[i];
    }
    countingSort(A, B, k);
    rep(i,n){
        cout << B[i];
        if(i != n-1) cout << " ";
    }cout << endl;
}
