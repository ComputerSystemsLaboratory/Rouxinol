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

const int INF = pow(10,9) + 100;

struct Card{ int number; char suit; };

int partition(vector<Card> &A, int p, int r){
    Card x = A[r];
    int i = p-1;
    for(int j=p; j<r; j++){
        if(A[j].number <= x.number){
            i++;
            swap(A[j], A[i]);
        }
    }
    swap(A[i+1], A[r]);
    return i+1;
}

void quickSort(vector<Card> &A, int p, int r){
    if(p < r){
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q, r);
    }
}

void merge(vector<Card> &A, int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<Card> L(n1+1);
    vector<Card> R(n2+1);
    rep(i,n1) L[i] = A[left+i];
    rep(i,n2) R[i] = A[mid+i];
    L[n1].number = INF;
    R[n2].number = INF;
    int i=0,j=0;
    for(int k=left; k<right; k++){
        if(L[i].number <= R[j].number){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(vector<Card> &A, int left, int right){
    if(left+1 < right){
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main()
{
    int n; cin >> n;
    vector<Card> A(n);
    vector<Card> B(n);
    rep(i,n){
        cin >> A[i].suit >> A[i].number;
        B[i] = A[i];
    }
    quickSort(A, 0, n-1);
    mergeSort(B, 0, n);
    bool isStable = true;
    rep(i,n){
        if(A[i].number != B[i].number || A[i].suit != B[i].suit) isStable = false;
    }
    if(isStable) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    rep(i,n){
        printf("%c %d\n", A[i].suit, A[i].number);
    }
}
