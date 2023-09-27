#include<bits/stdc++.h>
using namespace std;
/*
alias g='g++ -std=c++17 -O2 pra.cpp'
cd programming
cd cpp
cd practice

*/
#define rep(i, n) for(int i=0; i<(n); i++)
using veci = vector<int>;
using ll = long long;
int c[10010];
int a[2020202];
int b[2000200];
void countingsort(int a[], int b[], int k, int n){//計数ソート
    for (int i=0; i<k; i++){//記録用配列の全要素を0で初期化
        c[i] = 0;
    }
    for (int j=1; j<= n; j++){//要素数を数えて配列に記録する
        c[a[j]]++;
    }
    for (int i=1; i<=k; i++){//要素数の配列を用いて累積和をとる
        c[i] = c[i] + c[i-1];//これはコピーをとるとき、添え字の場所を示す
        //新しい住所のようなもの
    }
    for (int j=n; j>=1; j--){//まずもともとの配列を見て、
    //その値が示す要素数の配列の場所(新しい住所)を見て、
    //その場所にコピーをとる
    //後ろから選ぶことで安定なソートになる(住所を一個ずつ減らしていくため)
        b[c[a[j]]] = a[j];
        c[a[j]]--;//新しい住所の場所は既に使われてしまったので、
        //その一個前に変更する
    }
}
int main(){
    int n;
    cin >> n;
    rep(i, n)cin >> a[i+1];//使うのが1オリジンの配列なので、
    //1から始まるようにする
    countingsort(a, b, 10010, n);
    rep(i, n){
        cout << b[i+1];
        if (i != n-1) cout << " ";
    }
    cout << endl;
    return 0;
}
