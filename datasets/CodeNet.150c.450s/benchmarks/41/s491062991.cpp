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

const int MAX_N = 105;
const ll INF = pow(10,15);

ll A[MAX_N][MAX_N]; int n;

void init(){
    rep(i,MAX_N){
        rep(j,MAX_N){
            A[i][j] = (i == j ? 0: INF);
        }
    }
}

void warshallFloyd(){
    rep(k,n){
        rep(i,n){
            rep(j,n){
                A[i][j] = min(A[i][j], A[i][k]+A[k][j]);
            }
        }
    }
}

bool isNegative(){
    rep(i,n){
        rep(j,n){
            if(i == j && A[i][j] < 0) return true;
        }
    }
    return false;
}

void printpath(){
    rep(i,n){
        rep(j,n){
            if(A[i][j] > pow(10,12)) cout << "INF";
            else cout << A[i][j];
            if(j != n-1) cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    cin >> n;
    int e; cin >> e;
    init(); // 初期化
    rep(_,e){
        int u, v, c; cin >> u >> v >> c;
        A[u][v] = c;
    }
    warshallFloyd();
    if(isNegative()) cout << "NEGATIVE CYCLE" << endl;
    else printpath();
}
