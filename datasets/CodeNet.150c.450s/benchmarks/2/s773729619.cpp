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

int partition(vector<int> &A, int p, int r){
    int x = A[r];
    int i = p-1;
    for(int j=p; j<r; j++){
        if(A[j]<=x){
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i+1;
}

int main()
{
    int n; cin >> n;
    vector<int> A(n);
    rep(i,n) scanf("%d", &A[i]);
    int std = partition(A, 0 , n-1);
    rep(i,n){
        if(i == std) cout << "[";
        cout << A[i];
        if(i == std) cout << "]";
        if(i != n-1) cout << " ";
    }cout << endl;
}   
