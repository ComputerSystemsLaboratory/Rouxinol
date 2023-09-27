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

int H;

void maxHeapify(vector<ll> &A, int i){
    int l = 2*i+1; int r = 2*i+2;
    // 右の子、自分、左の子で最大のインデックスを選択する
    int largest;
    if(l < H && A[l] > A[i]){
        largest = l;
    }else{
        largest = i;
    }
    if(r < H && A[r] > A[largest]){
        largest = r;
    }
    if(largest != i){
        swap(A[i], A[largest]);
        maxHeapify(A, largest);
    }
}

void buildMaxHeap(vector<ll> &A){
    for(int i=H/2; i>=0; i--){
        maxHeapify(A, i);
    }
}

int main()
{
    cin >> H;
    vector<ll> A(H);
    rep(i, H){
        ll Ai; cin >> Ai;
        A[i] = Ai;
    }
    buildMaxHeap(A);
    rep(i, H) cout << " " << A[i];
    cout << endl;
}
