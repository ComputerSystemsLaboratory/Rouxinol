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

int H;

void maxHeapify(vector<int> &A, int i){
    int left = i*2+1;
    int right = i*2+2;
    int largest = i;
    if(left < H && A[i] < A[left]) largest = left;
    if(right < H && A[largest] < A[right]) largest = right;

    if(largest != i){
        swap(A[i], A[largest]);
        maxHeapify(A, largest);
    }
}

void buildMaxHeap(vector<int> &A){
    for(int i = (H-1)/2; i>=0; i--){
        maxHeapify(A, i);
    }
}

int main()
{
    cin >> H;
    vector<int> A(H);
    rep(i,H) cin >> A[i];
    buildMaxHeap(A);
    rep(i,H) printf(" %d", A[i]);
    cout << endl;
}
