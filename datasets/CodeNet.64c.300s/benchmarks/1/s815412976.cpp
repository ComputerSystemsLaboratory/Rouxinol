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
int pertition(int a[], int p, int r){//配列の最後の要素の値を基準に分割
    int x=a[r];
    int i=p-1;//iが小さいほうのまとまりをみる下限
    for (int j=p; j<r; j++){//jが大きいほうのまとまりを見る下限
        if (a[j] <= x){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}
int main(){
    int n;
    cin >> n;
    rep(i, n)cin >> a[i];
    int ans = pertition(a, 0, n-1);
    rep(i, n){
        if (i == ans) cout << "[";
        cout << a[i];
        if (i == ans) cout << "]";
        if (i != n-1) cout << " ";
    }
    cout << endl;
    return 0;
}
